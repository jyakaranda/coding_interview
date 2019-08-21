/**
 * @file 35.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-21
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __35__
#define __35__

#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/**
 * @brief 返回第一个只出现一次的字符，没有则返回 0
 * 
 * @param s_in 
 * @return char 
 */
static char firstCnt1Char(const string &s_in)
{
  vector<int> v_cnt(256, 0);
  for_each(s_in.begin(), s_in.end(), [&v_cnt](const char &c) { ++v_cnt[c]; });
  for (int i = 0; i < s_in.size(); ++i)
  {
    if (v_cnt[s_in[i]] == 1)
    {
      return s_in[i];
    }
  }
  return 0;
}

#endif