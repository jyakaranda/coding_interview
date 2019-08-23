/**
 * @file 41.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-23
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __41__
#define __41__

#include <vector>

using namespace std;

/**
 * @brief 返回递增排序数组中任意一对数字和等于 s 的元素下标
 * 
 * @param v_in 
 * @param s 
 * @param ia 
 * @param ib 
 */
static void twoSumEqual(const vector<int> &v_in, int s, int &ia, int &ib)
{
  ia = 0, ib = v_in.size() - 1;
  while (ia < ib)
  {
    int sum = v_in[ia] + v_in[ib];
    if (sum == s)
    {
      return;
    }
    else if (sum > s)
    {
      --ib;
    }
    else
    {
      ++ia;
    }
  }
  ia = ib = -1;
}

/**
 * @brief 输出和为 s 的连续正数序列，至少包含两个数
 * 
 * @param s 
 * @param v_out 
 */
static void sequenceSumEqual(int s, vector<vector<int>> &v_out)
{
  int is = 1, il = 2;
  int sum = is + il;
  int half_s = s / 2;
  while (true)
  {
    if (is > half_s)
    {
      break;
    }
    if (sum == s)
    {
      v_out.push_back(vector<int>());
      v_out.back().reserve(il - is + 1);
      for (int i = is; i <= il; ++i)
      {
        v_out.back().push_back(i);
      }
      ++il;
      sum += il - is;
      ++is;
    }
    else if (sum < s)
    {
      ++il;
      sum += il;
    }
    else
    {
      sum -= is;
      ++is;
    }
  }
}

#endif