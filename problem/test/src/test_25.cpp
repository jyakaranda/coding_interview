#include <gtest/gtest.h>
#include "BinaryTreeNode.h"
#include "6.h"
#include "25.h"
#include <vector>
#include <iostream>

using namespace std;

TEST(trace_of_bt, valid_input)
{
  BinaryTreeNode *root = buildTreeFromFM({4, 1, 7, 5, 2, 3, 6}, {7, 1, 5, 4, 3, 2, 6});
  int sum = 12;
  vector<vector<BinaryTreeNode *>> ans;
  traceOfBT(root, sum, ans);
  print2D(root);
  for (int i = 0; i < ans.size(); ++i)
  {
    for (int j = 0; j < ans[i].size(); ++j)
    {
      cout << ans[i][j]->m_nValue << " ";
    }
    cout << endl;
  }
}

TEST(trace_of_bt, valid_input1)
{
  BinaryTreeNode *root = buildTreeFromFM({4, 1, 7, 5, 2, 3, 6}, {7, 1, 5, 4, 3, 2, 6});
  int sum = 10;
  vector<vector<BinaryTreeNode *>> ans;
  traceOfBT(root, sum, ans);
  print2D(root);
  for (int i = 0; i < ans.size(); ++i)
  {
    for (int j = 0; j < ans[i].size(); ++j)
    {
      cout << ans[i][j]->m_nValue << " ";
    }
    cout << endl;
  }
}

TEST(trace_of_bt, valid_input2)
{
  BinaryTreeNode *root = buildTreeFromFM({4, 1, 7, 5, 2, 3, 6}, {7, 1, 5, 4, 3, 2, 6});
  int sum = 20;
  vector<vector<BinaryTreeNode *>> ans;
  traceOfBT(root, sum, ans);
  print2D(root);
  for (int i = 0; i < ans.size(); ++i)
  {
    for (int j = 0; j < ans[i].size(); ++j)
    {
      cout << ans[i][j]->m_nValue << " ";
    }
    cout << endl;
  }
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}