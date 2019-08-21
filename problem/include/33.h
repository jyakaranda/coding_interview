/**
 * @file 33.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-21
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __33__
#define __33__

#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/**
 * @brief 排列 v_in 中的数字，使得排列出来的数字最小
 * 
 * @param v_in 
 * @param s_out 
 */
static void rangeMin(const vector<int> &v_in, string &s_out)
{
  s_out.clear();
  if (v_in.empty())
  {
    return;
  }
  vector<string> v_digits(v_in.size());
  for (int i = 0; i < v_in.size(); ++i)
  {
    int n = v_in[i];
    while (n > 0)
    {
      v_digits[i].push_back('0' + (n % 10));
      n /= 10;
    }
  }
  auto cmp = [](const string &a, const string &b) -> bool {
    if (a.empty())
    {
      return true;
    }
    else if (b.empty())
    {
      return false;
    }
    int max_len = max(a.size(), b.size());
    char ca = a.back(), cb = b.back();
    for (int i = 0; i < max_len; ++i)
    {
      if (ca < cb)
      {
        return true;
      }
      else if (ca > cb)
      {
        return false;
      }
      else
      {
        if (i < a.size() - 1)
        {
          ca = a[a.size() - 2 - i];
        }
        if (i < b.size() - 1)
        {
          cb = b[b.size() - 2 - i];
        }
      }
    }
    return a.size() < b.size();
  };
  sort(v_digits.begin(), v_digits.end(), cmp);
  for (int i = 0; i < v_digits.size(); ++i)
  {
    reverse(v_digits[i].begin(), v_digits[i].end());
    s_out += v_digits[i];
  }
}

#endif