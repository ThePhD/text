cmake_minimum_required(VERSION 3.5)
cmake_policy(VERSION 3.5)
cmake_policy(SET CMP0077 NEW)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
project(boost_text LANGUAGES CXX)

include(FetchContent)

# # # Top-Level Directories
# Check if this is the top-level project or not
if(CMAKE_SOURCE_DIR STREQUAL PROJECT_SOURCE_DIR)
	set(BOOST_TEXT_IS_TOP_LEVEL_PROJECT YES)
else()
	set(BOOST_TEXT_IS_TOP_LEVEL_PROJECT NO)
endif()

option(BOOST_TEXT_INSTALL "Whether to add the typical Boost::text files to the install." OFF)
option(BOOST_TEXT_EXAMPLES "Whether the examples should be included as part of the configuration." OFF)
option(BOOST_TEXT_PERF "Whether the perf/benchmarks should be included as part of the configuration." OFF)
option(BOOST_TEXT_TESTS "Whether the tests should be included as part of the configuration." OFF)
option(BOOST_TEXT_FETCH_BOOST "Whether or not the entirety of the Boost dependency should be fetched directly with FetchContent." OFF)

if (BOOST_TEXT_IS_TOP_LEVEL_PROJECT)
    ################################################## 
    # C++ standard version selection
    ################################################## 
    set(CXX_STD 17 CACHE STRING "Set to 14, 17, etc., to enable C++14, C++17, etc.")
    set(CMAKE_CXX_STANDARD ${CXX_STD})

    ##################################################
    # Sanitizers
    ##################################################
    set(USE_ASAN false CACHE BOOL "Set to true to enable -fsanitize=address when building tests.") 
    set(USE_UBSAN false CACHE BOOL "Set to true to enable -fsanitize=undefined when building tests.")
    if (USE_ASAN AND USE_UBSAN)
        message(FATAL_ERROR "USE_ASAN and USE_UBSAN must not be enabled at the same time")
    elseif (USE_ASAN)
        set(compile_flags -fsanitize=address)
        set(link_flags -fsanitize=address)
        message("-- Using -fsanitize=address") 
    elseif (USE_UBSAN)
        set(compile_flags -fsanitize=undefined)
        set(link_flags -fsanitize=undefined)
        message("-- Using -fsanitize=undefined")
    endif()


    ##################################################
    # Code coverage
    ##################################################
    if (UNIX)
        set(BUILD_COVERAGE false CACHE BOOL "Set to true to enable code coverage when building tests.  Only Linux and Mac are supported.")
        if (BUILD_COVERAGE)
            message("-- Building for code coverage; disabling any sanitizers")
            if (APPLE)
                set(compile_flags -fprofile-arcs -ftest-coverage)
                set(CMAKE_BUILD_TYPE Debug)
                set(link_flags --coverage)
            else ()
                set(compile_flags --coverage)
                set(CMAKE_BUILD_TYPE Debug)
                set(link_flags --coverage)
            endif ()
        endif ()
    endif ()


    ##################################################
    # Dependencies
    ##################################################
    set(boost_components)

    # Built conditionally, because it relies on curses, Boost.System, and
    # Boost.Filesystem.  The Boost dependencies mean it must come before the
    # include here.
    set(BUILD_EDITOR false CACHE BOOL "Set to true to build ncurses-based text editor.")
    if (BUILD_EDITOR)
        set(boost_components filesystem system)
    endif()
endif()

################################################## 
# Dependencies
################################################## 
include(dependencies)

##################################################
# text library
##################################################
add_library(text
    src/grapheme_break.cpp
    src/word_break.cpp
    src/sentence_break.cpp
    src/line_break.cpp
    src/bidi.cpp
    src/normalization_data_cp_props.cpp
    src/normalization_data_compose.cpp
    src/collation_data_0.cpp
    src/collation_data_1.cpp
    src/collation_data_2.cpp
    src/case_mapping.cpp
    src/data_versions.cpp
)
add_library(Boost::text ALIAS text)
target_include_directories(text
  PUBLIC
  $<INSTALL_INTERFACE:include>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)
if (Boost_INCLUDE_DIRS)
    target_include_directories(text
        PUBLIC
        ${Boost_INCLUDE_DIRS})
endif()
if (TARGET Boost::boost)
    target_link_libraries(text
        PUBLIC
        Boost::boost)
endif()
target_compile_options(text PRIVATE -DBOOST_TEXT_SOURCE)
if (link_flags)
    target_link_libraries(text PUBLIC ${link_flags})
    target_compile_options(text PUBLIC ${compile_flags})
endif ()
if (NOT MSVC)
    target_compile_options(text PRIVATE -Wall)
endif ()

if (BOOST_TEXT_INSTALL)
    install(TARGETS text
        EXPORT text_export
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)

    install(EXPORT text_export
        FILE text-targets.cmake
        NAMESPACE Boost::
        DESTINATION lib/cmake/text)

    install(FILES
        ${CMAKE_CURRENT_SOURCE_DIR}/cmake/text-config.cmake
        DESTINATION "lib/cmake/text")

    install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/boost
        DESTINATION "include")
endif()

# See above for editor example.
if (BOOST_TEXT_IS_TOP_LEVEL_PROJECT)
    # If Boost was not found, make text depend on boost_clone, so that we clone
    # Boost from Github repos.  However, we don't want a permanent text ->
    # boost_clone dependency, so make this CMakeLists.txt file dirty by touching
    # it, after boost_clone finishes.
    #if (TARGET boost_clone)
    #  add_dependencies(text boost_clone)
    #  add_custom_command(TARGET boost_clone POST_BUILD
    #    COMMAND ${CMAKE_COMMAND} -E touch ${CMAKE_CURRENT_LIST_FILE})
    #endif()
    
    ##################################################
    # Tests and examples
    ##################################################
    # Built conditionally, because it relies on TSan.
    set(BUILD_ROPE_THREADSAFETY_TEST false CACHE BOOL "Set to true to build rope the threadsafety test.")
    # Built conditionally, because it relies on libFuzzer.
    set(BUILD_FUZZ_TESTS false CACHE BOOL "Set to true to build fuzz tests.")
    
    if (BUILD_FUZZ_TESTS AND NOT CMAKE_CXX_COMPILER_ID STREQUAL Clang)
        message(FATAL_ERROR "BUILD_FUZZ_TESTS only works with Clang; it uses libFuzzer.")
    endif ()
endif()

if (BOOST_TEXT_TESTS)
    add_subdirectory(test)
endif()
if (BOOST_TEXT_PERF)
    add_subdirectory(perf)
endif()
if (BOOST_TEXT_EXAMPLES)
    add_subdirectory(example)
endif()
