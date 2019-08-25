/**
 * @file 45.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-25
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __45__
#define __45__

#include <vector>
#include <list>
#include <iostream>
#include <algorithm>

using namespace std;

/**
 * @brief 约瑟夫环问题，n 个数字排成一个圈，每次删除第 m 个数字，返回最后被删除的数字
 * 
 * @param n 
 * @param m 
 * @return int 
 */
static int lastNumInCircle(int n, int m)
{
  list<int> l_n;
  for (int i = 0; i < n; ++i)
  {
    l_n.push_back(i);
  }
  auto start = l_n.begin();
  while (l_n.size() > 1)
  {
    auto tobe = start;
    for (int j = 1; j < m; ++j)
    {
      ++tobe;
      if (tobe == l_n.end())
      {
        ++tobe;
      }
    }
    start = ++tobe;
    if (start == l_n.end())
    {
      ++start;
    }
    --tobe;
    l_n.erase(tobe);
  }
  return l_n.front();
}

static int lastNumInCircle2(int n, int m)
{
  int pre = 0;
  for (int i = 2; i <= n; ++i)
  {
    pre = (pre + m) % i;
  }
  return pre;
}

#endif