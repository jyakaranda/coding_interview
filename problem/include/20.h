/**
 * @file 20.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-10
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __20__
#define __20__

#include <vector>
#include <iostream>

using namespace std;

/**
 * @brief 顺时针打印矩阵数组
 * 
 * @param v_2d 
 */
static void printClockWise(const vector<vector<int>> &v_2d)
{
  if (v_2d.empty())
  {
    return;
  }

  int rs = 0, cs = 0;
  int re = v_2d.size(), ce = v_2d[0].size();
  while (rs < re && cs < ce)
  {
    for (int i = cs; i < ce; ++i)
    {
      cout << v_2d[rs][i] << " ";
    }
    rs += 1;
    for (int i = rs; i < re; ++i)
    {
      cout << v_2d[i][ce - 1] << " ";
    }
    ce -= 1;
    for (int i = ce - 1; i >= cs; --i)
    {
      cout << v_2d[re - 1][i] << " ";
    }
    re -= 1;
    for (int i = re - 1; i >= rs; --i)
    {
      cout << v_2d[i][cs] << " ";
    }
    cs += 1;
  }
}

#endif
