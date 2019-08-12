/**
 * @file 24.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-11
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __24__
#define __24__

#include <vector>

using namespace std;

static bool helper(const vector<int> &v_in, int s, int e)
{
  if (s >= e)
  {
    return true;
  }
  int root = v_in[e];
  int right_size = 0;
  for (int i = e - 1; i >= s; --i)
  {
    if (v_in[i] > root)
    {
      ++right_size;
    }
    else
    {
      break;
    }
  }

  for (int i = s, end = e - right_size; i < end; ++i)
  {
    if (v_in[i] > root)
    {
      return false;
    }
  }

  return helper(v_in, s, e - right_size - 1) && helper(v_in, e - right_size, e - 1);
}

/**
 * @brief 判断给定序列是否是二叉搜索树的后序遍历序列，假设输入数字互不相同
 * 
 * @param v_in 
 * @return true 
 * @return false 
 */
static bool isBackTraverse(const vector<int> &v_in)
{
  if (v_in.size() <= 1)
  {
    return true;
  }
  return helper(v_in, 0, v_in.size() - 1);
}

#endif