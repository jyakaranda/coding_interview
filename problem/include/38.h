/**
 * @file 38.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-22
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __38__
#define __38__

#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
static T my_lower_bound(T first, T end, typename T::value_type n)
{
}

/**
 * @brief 返回 n 在排序数组中出现的次数
 * 
 * @param v_in 
 * @param n 
 * @return int 
 */
static int count(const vector<int> &v_in, int n)
{
  vector<int>::const_iterator lb = lower_bound(v_in.begin(), v_in.end(), n);
  auto ub = upper_bound(v_in.begin(), v_in.end(), n);
  return ub - lb;
}

#endif