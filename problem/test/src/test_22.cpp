#include <gtest/gtest.h>
#include "22.h"

TEST(valid_stack_seq, valid_input)
{
  ASSERT_EQ(validStackSeq({1, 2, 3, 4, 5}, {4, 5, 3, 2, 1}), true);
}

TEST(valid_stack_seq, valid_input1)
{
  ASSERT_EQ(validStackSeq({}, {}), true);
}

TEST(valid_stack_seq, valid_input2)
{
  ASSERT_EQ(validStackSeq({1}, {1}), true);
}

TEST(valid_stack_seq, invalid_input)
{
  ASSERT_EQ(validStackSeq({1, 2, 3, 4, 5}, {4, 5, 3, 1, 2}), false);
}

TEST(valid_stack_seq, invalid_input1)
{
  ASSERT_EQ(validStackSeq({1}, {2}), false);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}