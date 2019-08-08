/**
 * @file 18.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-08
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __18__
#define __18__

#include "BinaryTreeNode.h"

/**
 * @brief tb 是否为以 ta 为根节点的子结构
 * 
 * @param ta 
 * @param tb 
 * @return true 
 * @return false 
 */
static bool helper(BinaryTreeNode *ta, BinaryTreeNode *tb)
{
  if (nullptr == tb)
  {
    return true;
  }
  else if (nullptr == ta)
  {
    return false;
  }
  return ta->m_nValue == tb->m_nValue && helper(ta->m_pLeft, tb->m_pLeft) && helper(ta->m_pRight, tb->m_pRight);
}

/**
 * @brief 判断 tb 是否为 ta 的子结构
 * note: 空树是任意树的子结构
 * 
 * @param ta 
 * @param tb 
 * @return true 
 * @return false 
 */
static bool isSubTree(BinaryTreeNode *ta, BinaryTreeNode *tb)
{
  return helper(ta, tb) || (ta != nullptr && (isSubTree(ta->m_pLeft, tb) || isSubTree(ta->m_pRight, tb)));
}

#endif