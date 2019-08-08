#include <gtest/gtest.h>
#include "BinaryTreeNode.h"
#include "6.h"
#include "18.h"

TEST(is_subtree, positive_input)
{
  BinaryTreeNode *ta = buildTreeFromFM({10, 8, 9, 2, 4, 5, 7}, {9, 8, 4, 2, 5, 10, 7});
  BinaryTreeNode *tb = buildTreeFromFM({8, 9, 2}, {9, 8, 2});
  bool ans = isSubTree(ta, tb);
  ASSERT_EQ(ans, true);
}

TEST(is_subtree, negative_input)
{
  BinaryTreeNode *ta = buildTreeFromFM({10, 8, 9, 2, 4, 5, 7}, {9, 8, 4, 2, 5, 10, 7});
  BinaryTreeNode *tb = buildTreeFromFM({8, 9, 5}, {9, 8, 5});
  bool ans = isSubTree(ta, tb);
  ASSERT_EQ(ans, false);
}

TEST(is_subtree, positive_input1)
{
  BinaryTreeNode *ta = buildTreeFromFM({10, 8, 9, 2, 4, 5, 7}, {9, 8, 4, 2, 5, 10, 7});
  BinaryTreeNode *tb = buildTreeFromFM({}, {});
  bool ans = isSubTree(ta, tb);
  ASSERT_EQ(ans, true);
}

TEST(is_subtree, negative_input1)
{
  BinaryTreeNode *ta = buildTreeFromFM({}, {});
  BinaryTreeNode *tb = buildTreeFromFM({8, 9, 5}, {9, 8, 5});
  bool ans = isSubTree(ta, tb);
  ASSERT_EQ(ans, false);
}

TEST(is_subtree, negative_input2)
{
  BinaryTreeNode *ta = buildTreeFromFM({5, 4, 3, 2, 1}, {1, 2, 3, 4, 5});
  BinaryTreeNode *tb = buildTreeFromFM({5, 4, 3, 2, 1}, {5, 4, 3, 2, 1});
  bool ans = isSubTree(ta, tb);
  ASSERT_EQ(ans, false);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}