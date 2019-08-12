/**
 * @file ComplexListNode.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-12
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __COMPLEX_LIST_NODE__
#define __COMPLEX_LIST_NODE__

class ComplexListNode
{
public:
  ComplexListNode(int value) : m_nValue(value), m_pNext(nullptr), m_pSibling(nullptr) {}

  int m_nValue;
  ComplexListNode *m_pNext;
  ComplexListNode *m_pSibling;
};

#endif