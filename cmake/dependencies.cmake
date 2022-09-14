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
  set(boost_root_clone_dir ${CMAKE_BINARY_DIR}/_deps/boost_clone-src)
  add_custom_target(
    boost_root_clone
    git clone --depth 1 -b ${BOOST_BRANCH}
      https://github.com/boostorg/boost.git ${boost_root_clone_dir}
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR})
  if (WIN32)
    set(bootstrap_cmd ./bootstrap.bat)
  else()
    set(bootstrap_cmd ./bootstrap.sh)
  endif()
  add_custom_target(
    boost_clone
    COMMAND git submodule init libs/test
    COMMAND git submodule init libs/algorithm
    COMMAND git submodule init libs/align
    COMMAND git submodule init libs/array
    COMMAND git submodule init libs/atomic
    COMMAND git submodule init libs/bind
    COMMAND git submodule init libs/concept_check
    COMMAND git submodule init libs/container
    COMMAND git submodule init libs/container_hash
    COMMAND git submodule init libs/endian
    COMMAND git submodule init libs/exception
    COMMAND git submodule init libs/filesystem
    COMMAND git submodule init libs/function
    COMMAND git submodule init libs/integer
    COMMAND git submodule init libs/intrusive
    COMMAND git submodule init libs/io
    COMMAND git submodule init libs/iterator
    COMMAND git submodule init libs/move
    COMMAND git submodule init libs/mpl
    COMMAND git submodule init libs/numeric
    COMMAND git submodule init libs/optional
    COMMAND git submodule init libs/preprocessor
    COMMAND git submodule init libs/range
    COMMAND git submodule init libs/smart_ptr
    COMMAND git submodule init libs/static_assert
    COMMAND git submodule init libs/stl_interfaces
    COMMAND git submodule init libs/system
    COMMAND git submodule init libs/type_index
    COMMAND git submodule init libs/type_traits
    COMMAND git submodule init libs/throw_exception
    COMMAND git submodule init libs/utility
    COMMAND git submodule init libs/winapi
    COMMAND git submodule init libs/assert
    COMMAND git submodule init libs/config
    COMMAND git submodule init libs/core
    COMMAND git submodule init libs/predef
    COMMAND git submodule init libs/detail
    COMMAND git submodule init tools/build
    COMMAND git submodule init libs/headers
    COMMAND git submodule init tools/boost_install
    COMMAND git submodule update --jobs 3 --depth 100
    COMMAND ${bootstrap_cmd}
    COMMAND ./b2 headers
    COMMAND ./b2
    WORKING_DIRECTORY ${boost_root_clone_dir}
    DEPENDS boost_root_clone)
  add_library(boost INTERFACE)
  add_library(Boost::boost ALIAS boost)
  add_dependencies(boost boost_clone)
  target_include_directories(boost INTERFACE ${boost_root_clone_dir})
  set(Boost_INCLUDE_DIR ${boost_root_clone_dir})
  target_link_directories(boost INTERFACE ${boost_root_clone_dir}/stage/lib)
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
