/**
 * @file 25.h
 * @author jyakaranda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-12
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#ifndef __25__
#define __25__

#include "BinaryTreeNode.h"
#include <vector>

using namespace std;

static void helper(BinaryTreeNode *root, int &sum, vector<BinaryTreeNode *> &cur_path, vector<vector<BinaryTreeNode *>> &paths)
{
  if (nullptr == root)
  {
    return;
  }
  cur_path.push_back(root);
  sum -= root->m_nValue;

  helper(root->m_pLeft, sum, cur_path, paths);
  helper(root->m_pRight, sum, cur_path, paths);

  if (0 == sum && nullptr == root->m_pLeft && nullptr == root->m_pRight)
  {
    paths.push_back(cur_path);
  }
  cur_path.pop_back();
  sum += root->m_nValue;
}

/**
 * @brief 输出二叉树中节点值的和为输入整数的所有路径
 * 
 * @param root 
 * @param sum 
 * @param paths 
 */
static void traceOfBT(BinaryTreeNode *root, int sum, vector<vector<BinaryTreeNode *>> &paths)
{
  vector<BinaryTreeNode *> tmp;
  helper(root, sum, tmp, paths);
}

#endif