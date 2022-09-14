# Copyright Louis Dionne 2016
# Copyright Zach Laine 2016-2017
# Distributed under the Boost Software License, Version 1.0.
# (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)

include_guard(GLOBAL)

###############################################################################
# Boost
###############################################################################
function(fetch_boost)
  if (NOT BOOST_BRANCH)
    set(BOOST_BRANCH master)
  endif()
  if (WIN32)
    set(bootstrap_cmd ./bootstrap.bat)
  else()
    set(bootstrap_cmd ./bootstrap.sh)
  endif()
  FetchContent_Declare(
    boost
    GIT_REPOSITORY https://github.com/boostorg/boost.git
    GIT_SHALLOW true
    GIT_SUBMODULES
        libs/algorithm
        libs/align
        libs/array
        libs/assert
        libs/atomic
        libs/bind
        libs/config
        libs/concept_check
        libs/container
        libs/container_hash
        libs/conversion
        libs/core
        libs/detail
        libs/endian
        libs/exception
        libs/function
        libs/function_types
        libs/fusion
        libs/headers
        libs/integer
        libs/intrusive
        libs/io
        libs/iterator
        libs/move
        libs/mp11
        libs/mpl
        libs/numeric
        libs/optional
        libs/predef
        libs/preprocessor
        libs/range
        libs/regex
        libs/smart_ptr
        libs/static_assert
        libs/stl_interfaces
        libs/system
        libs/typeof
        libs/test
        libs/tuple
        libs/type_index
        libs/type_traits
        libs/throw_exception
        libs/utility
        libs/unordered
        libs/winapi
        tools/cmake
        tools/build
        tools/boost_install
  )
  FetchContent_GetProperties(boost)
  if(NOT boost_POPULATED)
    # Fetch the content using previously declared details
    FetchContent_Populate(boost)
    # do NOT add-subdirectory it at all.
  endif()
  set(boost_fetch_last_build ${boost_SOURCE_DIR}/stage/.cmakelastbuild)
  add_custom_command(OUTPUT ${boost_fetch_last_build}
    COMMAND git submodule update --depth 1
    COMMAND ${bootstrap_cmd}
    COMMAND ./b2 headers
    COMMAND ./b2
    COMMAND ${CMAKE_COMMAND} -E touch "${boost_fetch_last_build}"
    WORKING_DIRECTORY ${boost_SOURCE_DIR})
  add_custom_target(boost_clone_build
    DEPENDS ${boost_fetch_last_build})
  add_library(boost INTERFACE)
  add_library(Boost::boost ALIAS boost)
  add_dependencies(boost boost_clone_build)
  target_include_directories(boost INTERFACE ${boost_SOURCE_DIR})
  set(Boost_INCLUDE_DIR ${boost_SOURCE_DIR})
  target_link_directories(boost INTERFACE ${boost_SOURCE_DIR}/stage/lib)
endfunction()

if (BOOST_TEXT_FETCH_BOOST)
  fetch_boost()
else()
  set(boost_lib_deps
    fusion
    algorithm
    align
    array
    atomic
    bind
    concept_check
    container
    container_hash
    endian
    exception
    function
    function_types
    integer
    intrusive
    io
    iterator
    move
    mp11
    mpl
    optional
    preprocessor
    range
    smart_ptr
    static_assert
    stl_interfaces
    type_index
    type_traits
    throw_exception
    utility
    winapi
    unordered
    typeof
    conversion
    test
    tuple
    regex
    assert
    config
    core
    predef
    detail
  ) 
  set(Boost_USE_STATIC_LIBS ON)
  find_package(Boost 1.71.0 COMPONENTS ${boost_components})
  if (NOT Boost_INCLUDE_DIRS)
    message(STATUS "-- Boost was not found; it will be cloned locally from ${BOOST_BRANCH}.")
    fetch_boost()
  else()
    add_library(boost INTERFACE)
    add_library(Boost::boost ALIAS boost)
    target_include_directories(boost INTERFACE ${Boost_INCLUDE_DIR})
    target_link_directories(boost INTERFACE ${Boost_INCLUDE_DIR}/stage/lib)
  endif()
endif()


if (BOOST_TEXT_TESTS)
  ###############################################################################
  # GoogleTest
  ###############################################################################
  add_subdirectory(${CMAKE_SOURCE_DIR}/googletest-release-1.10.0)
  target_compile_definitions(gtest      PUBLIC GTEST_LANG_CXX11=1)
  target_compile_definitions(gtest_main PUBLIC GTEST_LANG_CXX11=1)
  target_include_directories(gtest      INTERFACE $<BUILD_INTERFACE:${CMAKE_HOME_DIRECTORY}/googletest-release-1.10.0/googletest/include>)
  target_include_directories(gtest_main INTERFACE $<BUILD_INTERFACE:${CMAKE_HOME_DIRECTORY}/googletest-release-1.10.0/googletest/include>)
endif()

if (BOOST_TEXT_PERF)
  ###############################################################################
  # Google Benchmark
  ###############################################################################
  add_subdirectory(${CMAKE_SOURCE_DIR}/benchmark-v1.2.0)


  ###############################################################################
  # ICU, for perf comparisons
  ###############################################################################
  if (MSVC)
      find_package(ICU 60 COMPONENTS in dt uc)
  else()
      find_package(ICU 60 COMPONENTS i18n data uc)
  endif()
endif()
