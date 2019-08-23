/**
 * @file 40.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-22
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __40__
#define __40__

#include <vector>

using namespace std;

/**
 * @brief 找出数组中两个只出现一次的数字
 * 
 * @param v_in 
 * @param a 
 * @param b 
 */
static void unique2Num(const vector<int> &v_in, int &a, int &b)
{
  a = b = 0;
  int all_xor = 0;
  for (int i = 0; i < v_in.size(); ++i)
  {
    all_xor = all_xor ^ v_in[i];
  }
  int partition = 0;
  while (all_xor != 0)
  {
    if ((all_xor & 1) == 1)
    {
      break;
    }
    all_xor = all_xor << 1;
    ++partition;
  }
  partition = 1 << partition;

  for (int i = 0; i < v_in.size(); ++i)
  {
    if ((v_in[i] & partition) == 1)
    {
      a = a ^ v_in[i];
    }
    else
    {
      b = b ^ v_in[i];
    }
  }
}

#endif