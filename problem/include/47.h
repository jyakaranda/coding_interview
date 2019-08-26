/**
 * @file 47.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-26
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __47__
#define __47__

static int extract(int idx, int a)
{
  return (1 << idx) & a;
}

/**
 * @brief 不适用加减乘除做加法
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int add(int a, int b)
{
  int n_size = sizeof(int);
  int c = 0;
  bool incre = false;
  for (int i = 0; i < n_size * 8; ++i)
  {
    if (extract(i, a) ^ extract(i, b) ^ (incre << i))
    {
      c |= 1 << i;
    }
    incre = (extract(i, a) & extract(i, b)) || ((extract(i, a) ^ extract(i, b)) & (incre << i));
  }
  return c;
}

static void swap(int &a, int &b)
{
  a = a + b;
  b = a - b;
  a = a - b;
}

#endif