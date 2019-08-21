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

  iter i = last - 1;
  if (i == first)
  {
    return false;
  }

  while (true)
  {
    iter ii = i;
    --i;
    if (*i < *ii)
    {
      iter j = last - 1;
      while (*i >= *j)
      {
        --j;
      }
      swap(*i, *j);
      reverse(ii, last);
      return true;
    }
    if (i == first)
    {
      reverse(first, last);
      return false;
    }
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
  vec.push_back(cur_s);
  while (myNextPermutation(cur_s.begin(), cur_s.end()))
  {
    vec.push_back(cur_s);
  }
}

static void helper(const string &s, string &cur, int cur_s, int m, vector<string> &vec)
{
  if (0 == m)
  {
    vec.push_back(cur);
    return;
  }
  if ((cur_s + m - 1) >= s.size())
  {
    return;
  }

  cur.push_back(s[cur_s]);
  helper(s, cur, cur_s + 1, m - 1, vec);
  cur.pop_back();
  int next_s = cur_s + 1;
  while (next_s < s.size() && (next_s + m - 1) < s.size() && s[cur_s] == s[next_s])
  {
    ++next_s;
  }
  helper(s, cur, next_s, m, vec);
}

/**
 * @brief 所有字符的组合
 * 
 * @param s 
 * @param vec 
 */
static void composition(const string &s, vector<string> &vec)
{
  if (s.empty())
  {
    return;
  }

  string tmp(s);
  sort(tmp.begin(), tmp.end());

  for (int len = 1; len <= s.size(); ++len)
  {
    string cur;
    helper(tmp, cur, 0, len, vec);
  }
}

#endif