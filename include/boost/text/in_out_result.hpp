// Copyright (C) 2020 T. Zachary Laine
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
#ifndef BOOST_TEXT_IN_OUT_RESULT_HPP
#define BOOST_TEXT_IN_OUT_RESULT_HPP

#include <boost/text/detail/attributes.hpp>

namespace boost { namespace text {

    /** A replacement for C++20's `std::ranges::in_out_result` for use in
        pre-C++20 build modes. */
    template<typename I, typename O>
    struct in_out_result
    {
        BOOST_TEXT_NO_UNIQUE_ADDRESS I in;
        BOOST_TEXT_NO_UNIQUE_ADDRESS O out;
    };

}}

#endif
