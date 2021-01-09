// -*- C++ -*-
//===-------------------------- tgmath.h ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_TGMATH_H
#define _LIBCPP_TGMATH_H

/*
    tgmath.h synopsis

#include <ctgmath>

*/

#include <__config>

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#pragma GCC system_header
#endif

#ifdef __cplusplus

#include <ctgmath>

#else  // __cplusplus

#if defined(_LIBCPP_HAS_INCLUDE_NEXT)
#include_next <tgmath.h>
#else
#include _LIBCPP_NATIVE_C_HEADER(tgmath.h)
#endif

#endif  // __cplusplus

#endif  // _LIBCPP_TGMATH_H
