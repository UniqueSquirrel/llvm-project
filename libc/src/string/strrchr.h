//===-- Implementation header for strrchr -----------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIBC_SRC_STRING_STRRCHR_H
#define LLVM_LIBC_SRC_STRING_STRRCHR_H

namespace __llvm_libc {

char *strrchr(const char *src, int c);

} // namespace __llvm_libc

#endif // LLVM_LIBC_SRC_STRING_STRRCHR_H
