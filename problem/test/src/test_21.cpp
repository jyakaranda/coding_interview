#include <gtest/gtest.h>
#include "21.h"

TEST(min_stack, valid_input)
{
  Stack<int> s;
  s.push(5);
  ASSERT_EQ(s.min(), 5);
  s.push(3);
  ASSERT_EQ(s.min(), 3);
  s.push(8);
  ASSERT_EQ(s.min(), 3);
  s.pop();
  s.pop();
  ASSERT_EQ(s.min(), 5);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}