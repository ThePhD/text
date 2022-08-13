// Copyright (C) 2022 T. Zachary Laine
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
#ifndef BOOST_TEXT_ATTRIBUTES_HPP
#define BOOST_TEXT_ATTRIBUTES_HPP

#if defined(__has_c_attribute)
#define BOOST_TEXT_HAS_STD_ATTRIBUTE(...) __has_c_attribute(__VA_ARGS__)
#elif defined(__has_cpp_attribute)
#define BOOST_TEXT_HAS_STD_ATTRIBUTE(...) __has_cpp_attribute(__VA_ARGS__)
#else
#define BOOST_TEXT_HAS_STD_ATTRIBUTE(...) 0
#endif

#if defined(__has_c_attribute)
#define BOOST_TEXT_HAS_ATTRIBUTE(...) __has_c_attribute(__VA_ARGS__)
#elif defined(__has_cpp_attribute)
#define BOOST_TEXT_HAS_ATTRIBUTE(...) __has_cpp_attribute(__VA_ARGS__)
#elif defined(__has_attribute)
#define BOOST_TEXT_HAS_ATTRIBUTE(...) __has_attribute(__VA_ARGS__)
#else
#define BOOST_TEXT_HAS_ATTRIBUTE(...) 0
#endif

#if BOOST_TEXT_HAS_ATTRIBUTE(no_unique_address)
#define BOOST_TEXT_NO_UNIQUE_ADDRESS [[no_unique_address]]
#elif BOOST_TEXT_HAS_ATTRIBUTE(msvc::no_unique_address) &&                     \
    __cplusplus >= 202000L
#define BOOST_TEXT_NO_UNIQUE_ADDRESS [[msvc::no_unique_address]]
#else
#define BOOST_TEXT_NO_UNIQUE_ADDRESS
#endif

#endif // BOOST_TEXT_ATTRIBUTES_HPP
