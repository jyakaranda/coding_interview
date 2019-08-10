/**
 * @file 19.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-10
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __19__
#define __19__

#include "BinaryTreeNode.h"
#include <stack>

using namespace std;

/**
 * @brief 镜像翻转
 * 
 * @param root 
 */
static void treeImage(BinaryTreeNode *root)
{
  if (nullptr == root)
  {
    return;
  }

  stack<BinaryTreeNode *> s_pBT;
  s_pBT.push(root);
  while (!s_pBT.empty())
  {
    root = s_pBT.top();
    s_pBT.pop();
    swap(root->m_pLeft, root->m_pRight);
    if (nullptr != root->m_pLeft)
    {
      s_pBT.push(root->m_pLeft);
    }
    if (nullptr != root->m_pRight)
    {
      s_pBT.push(root->m_pRight);
    }
  }
}

#endif