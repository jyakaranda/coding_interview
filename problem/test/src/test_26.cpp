#include <gtest/gtest.h>
#include "ComplexListNode.h"
#include "26.h"

TEST(clone_complex_list, valid_input)
{
  ComplexListNode *head = new ComplexListNode(0);
  ComplexListNode *cur = head;
  for (int i = 1; i < 5; ++i)
  {
    cur->m_pNext = new ComplexListNode(i);
    cur = cur->m_pNext;
  }
  head->m_pSibling = head->m_pNext;
  head->m_pNext->m_pSibling = head;
  head->m_pNext->m_pNext->m_pSibling = head;
  ComplexListNode *new_head = clone(head);
  while (new_head)
  {
    cout << "value: " << new_head->m_nValue << ", next: " << (new_head->m_pNext ? new_head->m_pNext->m_nValue : -1) << ", sibling: " << (new_head->m_pSibling ? new_head->m_pSibling->m_nValue : -1) << endl;
    new_head = new_head->m_pNext;
  }
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}