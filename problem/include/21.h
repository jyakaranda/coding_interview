/**
 * @file 21.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-10
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __21__
#define __21__

#include <stack>
#include <vector>

using namespace std;

/**
 * @brief 包含 min 函数的栈
 * 
 */
template <typename T>
class Stack
{
public:
  Stack() {}

  void push(const T &v);
  void pop();
  const T &min();

private:
  vector<T> s_;
  vector<pair<T, int>> min_s_;
};

template <typename T>
void Stack<T>::push(const T &v)
{
  s_.push_back(v);
  if (min_s_.empty() || v < min_s_.back().first)
  {
    min_s_.push_back(pair<T, int>(v, s_.size()));
  }
}

template <typename T>
void Stack<T>::pop()
{
  if (s_.empty())
  {
    throw out_of_range("emtpy stack!");
  }
  s_.pop_back();
  if (min_s_.back().second > s_.size())
  {
    min_s_.pop_back();
  }
}

template <typename T>
const T &Stack<T>::min()
{
  if (min_s_.empty())
  {
    throw out_of_range("emtpy stack!");
  }
  return min_s_.back().first;
}

#endif