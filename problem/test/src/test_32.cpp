#include <gtest/gtest.h>
#include "32.h"

TEST(count1In1ToN, valid_input)
{
  ASSERT_EQ(count1In1ToN(12), 5);
}

TEST(count1In1ToN, valid_input1)
{
  ASSERT_EQ(count1In1ToN(5), 1);
}

TEST(count1In1ToN, valid_input2)
{
  ASSERT_EQ(count1In1ToN(21235), 14668);
}

TEST(count1In1ToN, valid_input3)
{
  ASSERT_EQ(count1In1ToN(21230), 14662);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}