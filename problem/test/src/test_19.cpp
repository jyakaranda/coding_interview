#include <gtest/gtest.h>
#include "BinaryTreeNode.h"
#include "6.h"
#include "19.h"
#include <vector>

using namespace std;

TEST(tree_image, valid_input)
{
  BinaryTreeNode *root = buildTreeFromFM({8, 6, 5, 7, 10, 9, 11}, {5, 6, 7, 8, 9, 10, 11});
  treeImage(root);
  printBT(root);
  ASSERT_EQ(equal(root, buildTreeFromFM({8, 10, 11, 9, 6, 7, 5}, {11, 10, 9, 8, 7, 6, 5})), true);
}

TEST(tree_image, valid_input1)
{
  BinaryTreeNode *root = buildTreeFromFM({8, 6, 5}, {5, 6, 8});
  treeImage(root);
  // print2D(root);
  // print2D(buildTreeFromFM({8, 6, 5}, {8, 6, 5}));
  ASSERT_EQ(equal(root, buildTreeFromFM({8, 6, 5}, {8, 6, 5})), true);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}