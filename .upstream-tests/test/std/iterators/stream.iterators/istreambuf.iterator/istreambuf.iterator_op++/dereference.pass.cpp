//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
// SPDX-FileCopyrightText: Copyright (c) 2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//===----------------------------------------------------------------------===//

// <cuda/std/iterator>

// istreambuf_iterator

// charT operator*() const

#include <cuda/std/iterator>
#if defined(_LIBCUDACXX_HAS_SSTREAM)
#include <cuda/std/sstream>
#include <cuda/std/cassert>

#include "test_macros.h"

int main(int, char**)
{
    {
        cuda::std::istringstream inf("abc");
        cuda::std::istreambuf_iterator<char> i(inf);
        assert(*i == 'a');
        ++i;
        assert(*i == 'b');
        ++i;
        assert(*i == 'c');
    }
    {
        cuda::std::wistringstream inf(L"abc");
        cuda::std::istreambuf_iterator<wchar_t> i(inf);
        assert(*i == L'a');
        ++i;
        assert(*i == L'b');
        ++i;
        assert(*i == L'c');
    }

  return 0;
}
#else
int main(int, char**)
{
  return 0;
}
#endif
