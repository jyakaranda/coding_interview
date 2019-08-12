#include <gtest/gtest.h>
#include "24.h"
#include <vector>

using namespace std;

TEST(is_back_traverse, positive_input)
{
  ASSERT_EQ(isBackTraverse({5, 7, 6, 9, 10, 8}), true);
}

TEST(is_back_traverse, positive_input1)
{
  ASSERT_EQ(isBackTraverse({1, 2, 3, 4}), true);
}

TEST(is_back_traverse, negative_input)
{
  ASSERT_EQ(isBackTraverse({5, 7, 6, 9, 4, 8}), false);
}

TEST(is_back_traverse, negative_input1)
{
  ASSERT_EQ(isBackTraverse({5, 3, 4}), false);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}