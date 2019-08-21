#include <gtest/gtest.h>
#include "ListNode.h"
#include "37.h"
#include <vector>

using namespace std;

TEST(first_common_node, valid_input)
{
  ListNode *la = ListNode::fromVector({1, 2, 3, 4, 5});
  ListNode *lb = ListNode::fromVector({0});
  lb->m_pNext = la->m_pNext->m_pNext;
  ASSERT_EQ(firstCommonNode(la, lb), la->m_pNext->m_pNext);
}

TEST(first_common_node, valid_input1)
{
  ListNode *la = ListNode::fromVector({1, 2, 3, 4, 5});
  ListNode *lb = ListNode::fromVector({0});
  // lb->m_pNext = la->m_pNext->m_pNext;
  ASSERT_EQ(firstCommonNode(la, lb), nullptr);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}