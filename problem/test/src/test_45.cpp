#include <gtest/gtest.h>
#include "45.h"

TEST(lastNumInCircle, valid_input)
{
  int n = 5, m = 3;
  ASSERT_EQ(lastNumInCircle(n, m), 3);
}

TEST(lastNumInCircle, valid_input1)
{
  int n = 5, m = 2;
  ASSERT_EQ(lastNumInCircle(n, m), 2);
}

TEST(lastNumInCircle, valid_input2)
{
  int n = 4000, m = 997;
  ASSERT_EQ(lastNumInCircle(n, m), 1027);
}

TEST(lastNumInCircle2, valid_input)
{
  int n = 5, m = 3;
  ASSERT_EQ(lastNumInCircle2(n, m), 3);
}

TEST(lastNumInCircle2, valid_input1)
{
  int n = 5, m = 2;
  ASSERT_EQ(lastNumInCircle2(n, m), 2);
}

TEST(lastNumInCircle2, valid_input2)
{
  int n = 4000, m = 997;
  ASSERT_EQ(lastNumInCircle2(n, m), 1027);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}