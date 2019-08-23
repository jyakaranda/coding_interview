/**
 * @file 39.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-22
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __39__
#define __39__

#include "BinaryTreeNode.h"

static int helper(BinaryTreeNode *root)
{
  if (nullptr == root)
  {
    return 0;
  }
  else if (nullptr == root->m_pLeft && nullptr == root->m_pRight)
  {
    return 1;
  }
  return max(helper(root->m_pRight), helper(root->m_pLeft)) + 1;
}

/**
 * @brief 返回二叉树的深度
 * 
 * @param root 
 * @return int 
 */
static int treeDepth(BinaryTreeNode *root)
{
  return helper(root);
}

static bool isBalanceTree(BinaryTreeNode *root, int &depth)
{
  if (nullptr == root)
  {
    depth = 0;
    return true;
  }
  if (nullptr == root->m_pLeft && nullptr == root->m_pRight)
  {
    depth = 1;
    return true;
  }
  int left_depth, right_depth;
  if (!isBalanceTree(root->m_pLeft, left_depth))
  {
    return false;
  }
  if (!isBalanceTree(root->m_pRight, right_depth))
  {
    return false;
  }
  depth = max(left_depth, right_depth) + 1;
  return abs(left_depth - right_depth) < 2;
}

#endif