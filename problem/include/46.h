/**
 * @file 46.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-25
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __46__
#define __46__

template <int n>
class Sum2N
{
public:
  enum
  {
    data = n + Sum2N<n - 1>::data
  };
};

template <>
class Sum2N<1>
{
public:
  enum
  {
    data = 1
  };
};

class Base
{
public:
  virtual int data(int n)
  {
    return 0;
  }
};

Base *b2[2];

class Derived : public Base
{
public:
  virtual int data(int n)
  {
    return b2[!!n]->data(n - 1) + n;
  }
};

/**
 * @brief 计算累加和，不使用循环和条件判断
 * 
 * @param n 
 * @return int 
 */
static int helper(int n)
{
  Base b;
  Derived d;
  b2[0] = &b;
  b2[1] = &d;
  return b2[1]->data(n);
}

#endif