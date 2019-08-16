/**
 * @file 26.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-12
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __26__
#define __26__

#include "ComplexListNode.h"
#include <map>

using namespace std;

/**
 * @brief 拷贝复杂链表
 * 
 * @param head 
 * @return ComplexListNode* 
 */
static ComplexListNode *clone(ComplexListNode *head)
{
  if (nullptr == head)
  {
    return nullptr;
  }
  map<ComplexListNode *, ComplexListNode *> map;
  ComplexListNode *cur = head;
  ComplexListNode *copy_head = new ComplexListNode(cur->m_nValue);
  ComplexListNode *cur_copy = copy_head;
  map[cur] = cur_copy;
  cur = cur->m_pNext;
  while (nullptr != cur)
  {
    ComplexListNode *node = new ComplexListNode(cur->m_nValue);
    cur_copy->m_pNext = node;
    cur_copy = cur_copy->m_pNext;
    map[cur] = cur_copy;
    cur = cur->m_pNext;
  }
  cur = head;
  cur_copy = copy_head;
  while (nullptr != cur)
  {
    if (nullptr != cur->m_pSibling)
    {
      cur_copy->m_pSibling = map[cur->m_pSibling];
    }
    cur = cur->m_pNext;
    cur_copy = cur_copy->m_pNext;
  }
  return copy_head;
}

#endif