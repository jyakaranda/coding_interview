/**
 * @file 23.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-10
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __23__
#define __23__

#include "BinaryTreeNode.h"
#include <vector>
#include <queue>

using namespace std;

/**
 * @brief 层级遍历
 * 
 * @param root 
 * @param out 
 */
static void levelTraverse(BinaryTreeNode *root, vector<int> &out)
{
  if (nullptr == root)
  {
    return;
  }

  queue<BinaryTreeNode *> q_pBT;
  q_pBT.push(root);
  while (!q_pBT.empty())
  {
    root = q_pBT.front();
    q_pBT.pop();
    out.push_back(root->m_nValue);
    if (nullptr != root->m_pLeft)
    {
      q_pBT.push(root->m_pLeft);
    }
    if (nullptr != root->m_pRight)
    {
      q_pBT.push(root->m_pRight);
    }
  }
}

#endif