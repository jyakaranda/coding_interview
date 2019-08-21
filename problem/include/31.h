/**
 * @file 31.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-20
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __31__
#define __31__

#include <vector>
#include <limits>

using namespace std;

/**
 * @brief 连续子数组的最大和
 * 
 * @param v_in 
 * @return int 
 */
static int maxConsSubSeqSum(const vector<int> &v_in)
{
  if (v_in.empty())
  {
    return std::numeric_limits<int>::min();
  }

  int ans = std::numeric_limits<int>::min();
  int cur = v_in[0];
  for (int i = 1; i < v_in.size(); ++i)
  {
    if (cur <= 0)
    {
      cur = max(cur, v_in[i]);
    }
    else
    {
      cur += v_in[i];
    }
    if (cur > ans)
    {
      ans = cur;
    }
  }
  return ans;
}

#endif