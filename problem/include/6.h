/**
 * @file 6.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-08
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __6__
#define __6__

#include <vector>
#include <iostream>
#include "BinaryTreeNode.h"

using namespace std;

/**
 * @brief 递归建树
 * 
 * @param forward 
 * @param fs 
 * @param middle 
 * @param ms 
 * @param n 
 * @return BinaryTreeNode* 
 */
static BinaryTreeNode *bulidHelper(const vector<int> &forward, int fs, const vector<int> &middle, int ms, int n)
{
  if (n <= 0)
  {
    return nullptr;
  }
  BinaryTreeNode *node = new BinaryTreeNode(forward[fs]);
  int left_nodes = 0;
  for (int i = ms, end = ms + n; i < end; ++i)
  {
    if (middle[i] == forward[fs])
    {
      left_nodes = i - ms;
    }
  }
  node->m_pLeft = bulidHelper(forward, fs + 1, middle, ms, left_nodes);
  node->m_pRight = bulidHelper(forward, fs + 1 + left_nodes, middle, ms + left_nodes + 1, n - 1 - left_nodes);
}

/**
 * @brief 前序，中序建树
 * note: 不包含重复元素
 * @param forward 
 * @param middle 
 * @return BinaryTreeNode* 
 */
static BinaryTreeNode *buildTreeFromFM(const vector<int> &forward, const vector<int> &middle)
{
  if (forward.size() != middle.size() || forward.size() == 0)
  {
    // 简单检查长度是否一致
    return nullptr;
  }
  return bulidHelper(forward, 0, middle, 0, forward.size());
}

#endif