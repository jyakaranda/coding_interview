#include <gtest/gtest.h>
#include "47.h"

TEST(add, valid_input)
{
  int a = 3, b = 10;
  ASSERT_EQ(add(a, b), 13);
}

TEST(add, valid_input1)
{
  int a = 3, b = -10;
  ASSERT_EQ(add(a, b), -7);
}

TEST(add, valid_input2)
{
  int a = -3, b = -10;
  ASSERT_EQ(add(a, b), -13);
}

TEST(add, valid_input3)
{
  int a = -3, b = 10;
  ASSERT_EQ(add(a, b), 7);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}