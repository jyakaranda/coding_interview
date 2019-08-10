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

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class BinaryTreeNode
{
public:
  BinaryTreeNode(int v = 0) : m_nValue(v), m_pLeft(nullptr), m_pRight(nullptr) {}
  int m_nValue;
  BinaryTreeNode *m_pLeft;
  BinaryTreeNode *m_pRight;
};

/**
 * @brief reference: https://stackoverflow.com/questions/36802354/print-binary-tree-in-a-pretty-way-using-c?noredirect=1&lq=1
 * 
 * @param prefix 
 * @param node 
 * @param isLeft 
 */
void printBT(const string &prefix, const BinaryTreeNode *node, bool isLeft)
{
  if (node != nullptr)
  {
    cout << prefix;

    cout << (isLeft ? "├──" : "└──");

    // print the value of the node
    cout << node->m_nValue << endl;

    // enter the next tree level - m_pLeft and m_pRight branch
    printBT(prefix + (isLeft ? "│   " : "    "), node->m_pLeft, true);
    printBT(prefix + (isLeft ? "│   " : "    "), node->m_pRight, false);
  }
}

void printBT(const BinaryTreeNode *node)
{
  printBT("", node, false);
}

// Function to print binary tree in 2D
// It does reverse inorder traversal
void print2DUtil(BinaryTreeNode *root, int space)
{
  // Base case
  if (root == NULL)
    return;

  static int COUNT = 3;
  // Increase distance between levels
  space += COUNT;

  // Process m_pRight child first
  print2DUtil(root->m_pRight, space);

  // Print current node after space
  // count
  cout << endl;
  for (int i = COUNT; i < space; i++)
    cout << " ";
  cout << root->m_nValue << "\n";

  // Process m_pLeft child
  print2DUtil(root->m_pLeft, space);
}

// Wrapper over print2DUtil()
void print2D(BinaryTreeNode *root)
{
  // Pass initial space count as 0
  print2DUtil(root, 0);
}

/**
 * @brief 后序遍历，结果输出到 out
 * 
 * @param root 
 * @param out 
 */
static void backTraverse(BinaryTreeNode *root, vector<int> &out)
{
  if (nullptr == root)
  {
    return;
  }
  backTraverse(root->m_pLeft, out);
  backTraverse(root->m_pRight, out);
  out.push_back(root->m_nValue);
}

static void backTraverseOutput(BinaryTreeNode *root)
{
  vector<int> out;
  backTraverse(root, out);
  for_each(out.begin(), out.end(), [](const int &n) { cout << n << " "; });
}

static bool equal(BinaryTreeNode *lhs, BinaryTreeNode *rhs)
{
  if (nullptr == lhs && nullptr == rhs)
  {
    return true;
  }
  else if (nullptr == lhs || nullptr == rhs)
  {
    if (nullptr == lhs)
    {
      cout << "rhs: " << rhs->m_nValue << endl;
    }
    else
    {
      cout << "lhs: " << lhs->m_nValue << endl;
    }
    return false;
  }

  if (lhs->m_nValue == rhs->m_nValue)
  {
    return equal(lhs->m_pLeft, rhs->m_pLeft) && equal(lhs->m_pRight, rhs->m_pRight);
  }
  else
  {
    cout << "lhs: " << lhs->m_nValue << ", rhs: " << rhs->m_nValue << endl;
    return false;
  }
}

#endif