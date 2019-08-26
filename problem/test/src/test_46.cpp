#include <gtest/gtest.h>
#include "46.h"

TEST(Sum2N, valid_input)
{
  int n = 10;
  ASSERT_EQ(Sum2N<10>().data, (1 + n) * n / 2);
}

TEST(Sum2N, valid_input1)
{
  int n = 10;
  ASSERT_EQ(helper(n), (1 + n) * n / 2);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}