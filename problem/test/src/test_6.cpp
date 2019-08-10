#include <gtest/gtest.h>
#include "BinaryTreeNode.h"
#include "6.h"
#include <vector>

using namespace std;

TEST(build_from_fm, valid_input)
{
  BinaryTreeNode *root = buildTreeFromFM({1, 2, 4, 7, 3, 5, 6, 8}, {4, 7, 2, 1, 5, 3, 8, 6});
  backTraverseOutput(root);
  cout << endl;
}

TEST(build_from_fm, valid_input1)
{
  BinaryTreeNode *root = buildTreeFromFM({1, 2, 4}, {4, 2, 1});
  backTraverseOutput(root);
  cout << endl;
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}