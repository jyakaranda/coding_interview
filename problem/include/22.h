/**
 * @file 22.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-10
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __22__
#define __22__

#include <vector>

using namespace std;

/**
 * @brief 给定栈的 push、pop 序列，判断是否为栈的合法 pop 序列
 * note: 非法输入(长度不同，元素值不同，重复元素值)
 * 
 * @param push_seq 
 * @param pop_seq 
 * @return true 
 * @return false 
 */
static bool validStackSeq(const vector<int> &push_seq, const vector<int> &pop_seq)
{
  if (push_seq.empty() && pop_seq.empty())
  {
    return true;
  }
  else if (push_seq.size() != pop_seq.size())
  {
    return false;
  }
  vector<int> tmp_s;
  int push_i = 0;
  int pop_i = 0;
  while (pop_i < pop_seq.size())
  {
    if (tmp_s.empty() || pop_seq[pop_i] != tmp_s.back())
    {
      if (push_i < push_seq.size())
      {
        tmp_s.push_back(push_seq[push_i]);
        ++push_i;
      }
      else
      {
        return false;
      }
    }
    else
    {
      tmp_s.pop_back();
      ++pop_i;
    }
  }
  return true;
}

#endif