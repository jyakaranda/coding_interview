#include <gtest/gtest.h>
#include "BinaryTreeNode.h"
#include "6.h"
#include "23.h"
#include <vector>

using namespace std;

TEST(level_traverse, valid_input)
{
  BinaryTreeNode *root = buildTreeFromFM({8, 6, 5, 7, 10, 9, 11}, {5, 6, 7, 8, 9, 10, 11});
  vector<int> out;
  levelTraverse(root, out);
  print2D(root);
  ASSERT_EQ(out == vector<int>({8, 6, 10, 5, 7, 9, 11}), true);
}

TEST(level_traverse, valid_input1)
{
  BinaryTreeNode *root = buildTreeFromFM({}, {});
  vector<int> out;
  levelTraverse(root, out);
  print2D(root);
  ASSERT_EQ(out == vector<int>({}), true);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}