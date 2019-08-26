/**
 * @file 48.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-26
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __48__
#define __48__

class Base
{
public:
  static Base *getBase()
  {
    return new Base();
  }
  static void deleteBase(Base *b)
  {
    delete b;
  }

  static Base get2()
  {
    return Base();
  }

private:
  Base() {}
};

class Derived : public Base
{
public:
  Derived(const Derived &d) : Base(d)
  {
  }
};

#endif