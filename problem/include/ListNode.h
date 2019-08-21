/**
 * @file ListNode.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-22
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __LIST_NODE__
#define __LIST_NODE__

#include <vector>

using namespace std;

class ListNode
{
public:
  int m_nKey;
  ListNode *m_pNext;

  ListNode(int n = 0) : m_nKey(n), m_pNext(nullptr) {}

  int length()
  {
    ListNode *cur = this;
    int len = 0;
    while (cur)
    {
      ++len;
      cur = cur->m_pNext;
    }
    return len;
  }

  static ListNode *fromVector(const vector<int> &v_in)
  {
    if (v_in.empty())
    {
      return nullptr;
    }
    ListNode *head = new ListNode(v_in[0]);
    ListNode *cur = head;
    for (int i = 1; i < v_in.size(); ++i)
    {
      cur->m_pNext = new ListNode(v_in[i]);
      cur = cur->m_pNext;
    }
    return head;
  }
};

#endif