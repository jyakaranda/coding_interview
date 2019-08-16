/**
 * @file 28.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-15
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __28__
#define __28__

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

template <typename iter>
static bool myNextPermutation(iter first, iter last)
{
  if (first == last)
  {
    return false;
  }

  iter cur = last - 1;
  while (cur > first)
  {
    if (*cur > *(cur - 1))
    {
      swap(*cur, *(cur - 1));
      break;
    }
    --cur;
  }

  if (cur == first)
  {
    return false;
  }
  else
  {
    reverse(cur + 1, last);
    return true;
  }
}

/**
 * @brief 输出 s 中字符的所有排列
 * 
 * @param s 
 * @param vec 
 */
static void permutation(const string &s, vector<string> &vec)
{
  if (s.empty())
  {
    return;
  }

  bool flag = true;
  string cur_s(s);
  sort(cur_s.begin(), cur_s.end());
  while (myNextPermutation(cur_s.begin(), cur_s.end()))
  {
    vec.push_back(cur_s);
  }
}

#endif