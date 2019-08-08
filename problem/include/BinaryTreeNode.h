/**
 * @file BinaryTreeNode.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-08
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __BINARY_TREE_NODE__
#define __BINARY_TREE_NODE__

class BinaryTreeNode
{
public:
  BinaryTreeNode(int v = 0) : m_nValue(v), m_pLeft(nullptr), m_pRight(nullptr) {}
  int m_nValue;
  BinaryTreeNode *m_pLeft;
  BinaryTreeNode *m_pRight;
};

#endif