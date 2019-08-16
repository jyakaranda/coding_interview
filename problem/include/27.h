/**
 * @file 27.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-15
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __27__
#define __27__

#include "BinaryTreeNode.h"

static void helper(BinaryTreeNode *root, BinaryTreeNode *&head, BinaryTreeNode *&tail)
{
  if (!root)
  {
    // head = tail = nullptr;
    return;
  }
  if (!root->m_pLeft && !root->m_pRight)
  {
    head = tail = root;
  }
  // 左子树为空
  if (!root->m_pLeft)
  {
    head = root;
    BinaryTreeNode *r_head;
    helper(root->m_pRight, r_head, tail);
    head->m_pRight = r_head;
    r_head->m_pLeft = head;
    return;
  }
  // 右子树为空
  if (!root->m_pRight)
  {
    tail = root;
    BinaryTreeNode *r_tail;
    helper(root->m_pLeft, head, r_tail);
    tail->m_pLeft = r_tail;
    r_tail->m_pRight = tail;
    return;
  }
  // 左右子树均不为空
  BinaryTreeNode *l_tail, *r_head;
  helper(root->m_pLeft, head, l_tail);
  root->m_pLeft = l_tail;
  l_tail->m_pRight = root;
  helper(root->m_pRight, r_head, tail);
  root->m_pRight = r_head;
  r_head->m_pLeft = root;
}

/**
 * @brief 将给定二叉搜索树输出为排序双向链表
 * 
 * @param root 
 * @return 
 */
static void toBiList(BinaryTreeNode *root, BinaryTreeNode *&head, BinaryTreeNode *&tail)
{
  helper(root, head, tail);
}

#endif