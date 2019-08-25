#include <gtest/gtest.h>
#include "44.h"
#include <vector>

using namespace std;

TEST(judgeConsec, valid_input)
{
  vector<int> v_in({1, 2, 3, 4, 5});
  ASSERT_EQ(judgeConsec(v_in), true);
}

TEST(judgeConsec, valid_input1)
{
  vector<int> v_in({1, 4, 3, 4, 5});
  ASSERT_EQ(judgeConsec(v_in), false);
}

TEST(judgeConsec, valid_input2)
{
  vector<int> v_in({6, 2, 3, 4, 5});
  ASSERT_EQ(judgeConsec(v_in), true);
}

TEST(judgeConsec, valid_input3)
{
  vector<int> v_in({-1, 2, 3, 4, 5});
  ASSERT_EQ(judgeConsec(v_in), true);
}

TEST(judgeConsec, valid_input4)
{
  vector<int> v_in({1, -1, -1, 4, 5});
  ASSERT_EQ(judgeConsec(v_in), true);
}

TEST(judgeConsec, valid_input5)
{
  vector<int> v_in({1, -1, -1, 4, 13});
  ASSERT_EQ(judgeConsec(v_in), false);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}