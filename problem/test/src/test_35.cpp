#include <gtest/gtest.h>
#include "35.h"
#include <string>

using namespace std;

TEST(first_cnt1_char, valid_input)
{
  string s_in = "abaccdeff";
  ASSERT_EQ(firstCnt1Char(s_in), 'b');
}

TEST(first_cnt1_char, valid_input1)
{
  string s_in = "abcabcdd";
  ASSERT_EQ(firstCnt1Char(s_in), 0);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}