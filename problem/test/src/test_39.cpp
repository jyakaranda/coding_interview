#include <gtest/gtest.h>
#include "39.h"
#include "BinaryTreeNode.h"
#include "6.h"

using namespace std;

TEST(tree_depth, valid_input)
{
  BinaryTreeNode *root = buildTreeFromFM({3, 1, 5, 2}, {5, 1, 3, 2});
  print2D(root);
  ASSERT_EQ(treeDepth(root), 3);
}

TEST(is_balance_tree, valid_input)
{
  BinaryTreeNode *root = buildTreeFromFM({3, 1, 5, 2}, {5, 1, 3, 2});
  print2D(root);
  int depth = 0;
  ASSERT_EQ(isBalanceTree(root, depth), true);
}

TEST(is_balance_tree, valid_input1)
{
  BinaryTreeNode *root = buildTreeFromFM({3, 1, 5}, {5, 1, 3});
  print2D(root);
  int depth = 0;
  ASSERT_EQ(isBalanceTree(root, depth), false);
}

TEST(is_balance_tree, valid_input2)
{
  BinaryTreeNode *root = buildTreeFromFM({3, 1, 5, 7, 2}, {7, 5, 1, 3, 2});
  print2D(root);
  int depth = 0;
  ASSERT_EQ(isBalanceTree(root, depth), false);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}