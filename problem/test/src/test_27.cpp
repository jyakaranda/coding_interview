#include <gtest/gtest.h>
#include "BinaryTreeNode.h"
#include "6.h"
#include "27.h"
#include <iostream>
#include <vector>

using namespace std;

// 完全二叉树
TEST(to_bi_list, valid_input)
{
  vector<int> v_inorder({4, 6, 8, 10, 12, 14, 16});
  BinaryTreeNode *root = buildTreeFromFM({10, 6, 4, 8, 14, 12, 16}, v_inorder);
  BinaryTreeNode *head = nullptr, *tail = nullptr;
  toBiList(root, head, tail);
  for (int i = 0; i < v_inorder.size(); ++i)
  {
    ASSERT_EQ(head->m_nValue, v_inorder[i]);
    head = head->m_pRight;
  }
  for (int i = v_inorder.size() - 1; i >= 0; --i)
  {
    ASSERT_EQ(tail->m_nValue, v_inorder[i]);
    tail = tail->m_pLeft;
  }
}

// 无右子树
TEST(to_bi_list, valid_input1)
{
  vector<int> v_inorder({4, 6, 10});
  BinaryTreeNode *root = buildTreeFromFM({10, 6, 4}, v_inorder);
  BinaryTreeNode *head = nullptr, *tail = nullptr;
  toBiList(root, head, tail);
  for (int i = 0; i < v_inorder.size(); ++i)
  {
    ASSERT_EQ(head->m_nValue, v_inorder[i]);
    head = head->m_pRight;
  }
  for (int i = v_inorder.size() - 1; i >= 0; --i)
  {
    ASSERT_EQ(tail->m_nValue, v_inorder[i]);
    tail = tail->m_pLeft;
  }
}

// 无左子树
TEST(to_bi_list, valid_input2)
{
  vector<int> v_inorder({10, 14, 16});
  BinaryTreeNode *root = buildTreeFromFM({10, 14, 16}, v_inorder);
  BinaryTreeNode *head = nullptr, *tail = nullptr;
  toBiList(root, head, tail);
  for (int i = 0; i < v_inorder.size(); ++i)
  {
    ASSERT_EQ(head->m_nValue, v_inorder[i]);
    head = head->m_pRight;
  }
  for (int i = v_inorder.size() - 1; i >= 0; --i)
  {
    ASSERT_EQ(tail->m_nValue, v_inorder[i]);
    tail = tail->m_pLeft;
  }
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}