/**
 * @file 34.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-21
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __34__
#define __34__

#include <vector>

using namespace std;

/**
 * @brief 返回第 nth 个丑数（只能被 2, 3, 5 整除）
 * 
 * @param nth 
 */
static int uglyNum(int nth)
{
  vector<int> v_ugly({1, 2, 3, 4, 5});
  if (nth < 1)
  {
    return -1;
  }
  int i2 = 2, i3 = 2, i5 = 4;
  for (int i = 5; i < nth; ++i)
  {
    int ugly2 = 2 * v_ugly[i2],
        ugly3 = 3 * v_ugly[i3],
        ugly5 = 5 * v_ugly[i5];
    if (ugly2 < ugly3 && ugly2 < ugly5)
    {
      v_ugly.push_back(ugly2);
      ++i2;
    }
    else if (ugly3 < ugly5)
    {
      v_ugly.push_back(ugly3);
      ++i3;
      if (ugly2 == ugly3)
      {
        ++i2;
      }
    }
    else
    {
      v_ugly.push_back(ugly5);
      ++i5;
      if (ugly5 == ugly3)
      {
        ++i3;
      }
      if (ugly5 == ugly2)
      {
        ++i2;
      }
    }
  }

  return v_ugly[nth - 1];
}

#endif