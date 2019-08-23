/**
 * @file 42.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-23
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __42__
#define __42__

#include <string>
#include <algorithm>

using namespace std;

static void reverseTango(const string &s_in, string &s_out)
{
  s_out.clear();
  s_out.insert(s_out.end(), s_in.begin(), s_in.end());
  reverse(s_out.begin(), s_out.end());
  int s = 0, e = s + 1;
  while (s < s_out.size())
  {
    while (s < s_out.size() && s_out[s] == ' ')
    {
      ++s;
    }
    e = s < s_out.size() ? s + 1 : s;
    while (e < s_out.size() && s_out[e] != ' ')
    {
      ++e;
    }
    reverse(s_out.begin() + s, s_out.begin() + e);
    s = e;
  }
}

#endif