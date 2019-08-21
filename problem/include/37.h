/**
 * @file 37.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-22
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __37__
#define __37__

#include "ListNode.h"

static ListNode *firstCommonNode(ListNode *la, ListNode *lb)
{
  if (nullptr == la || nullptr == lb)
  {
    return nullptr;
  }
  int len_a = la->length(),
      len_b = lb->length();
  if (len_a > len_b)
  {
    for (int i = 0; i < len_a - len_b; ++i)
    {
      la = la->m_pNext;
    }
  }
  else
  {
    for (int i = 0; i < len_b - len_a; ++i)
    {
      lb = lb->m_pNext;
    }
  }

  while (la)
  {
    if (la == lb)
    {
      return la;
    }
    la = la->m_pNext;
    lb = lb->m_pNext;
  }

  return nullptr;
}

#endif