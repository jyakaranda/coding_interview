/**
 * @file 44.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-25
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __44__
#define __44__

// #include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * @brief 判断 5 张牌是不是顺子，A 为 1，JQK 分别为 11~13，大小王可以为任意数字
 * 
 * @param v_in，5 个数字，-1 代表大小王
 * @return true 
 * @return false 
 */
static bool judgeConsec(vector<int> v_in)
{
  int jokers = 0;
  vector<int> v_no_joker;
  for (int i = 0; i < 5; ++i)
  {
    if (v_in[i] == -1)
    {
      ++jokers;
    }
    else
    {
      v_no_joker.push_back(v_in[i]);
    }
  }
  if (jokers >= 4)
  {
    return true;
  }

  sort(v_no_joker.begin(), v_no_joker.end());
  int cnt = 0;
  for (int i = 1; i < v_no_joker.size(); ++i)
  {
    if (v_no_joker[i] == v_no_joker[i - 1])
    {
      return false;
    }
    cnt += v_no_joker[i] - v_no_joker[i - 1] - 1;
  }
  return cnt <= jokers;
}

#endif