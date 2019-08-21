/**
 * @file 29.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-19
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __29__
#define __29__

#include <vector>

using namespace std;

/**
 * @brief 输出数组中出现次数超过一半的数字的下标，没有则输出 -1
 * 
 * @param vec_in 
 * @return int 
 */
static int overHalfTimes(const vector<int> &vec_in)
{
  if (vec_in.empty())
  {
    return -1;
  }

  int ans = 0;
  int cnt = 1;
  for (int i = 1; i < vec_in.size(); ++i)
  {
    if (vec_in[ans] == vec_in[i])
    {
      ++cnt;
    }
    else
    {
      --cnt;
      if (cnt < 0)
      {
        cnt = 1;
        ans = i;
      }
    }
  }
  if (cnt > 0)
  {
    return ans;
  }
  else
  {
    return -1;
  }
}

#endif