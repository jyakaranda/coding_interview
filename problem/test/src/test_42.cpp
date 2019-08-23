#include <gtest/gtest.h>
#include "42.h"
#include <string>

using namespace std;

TEST(reverseTango, valid_input)
{
  string s_in = "I am a student.";
  string s_out;
  reverseTango(s_in, s_out);
  ASSERT_EQ(s_out, "student. a am I");
}

TEST(reverseTango, valid_input1)
{
  string s_in = " I am a  student. ";
  string s_out;
  reverseTango(s_in, s_out);
  ASSERT_EQ(s_out, " student.  a am I ");
}

TEST(reverseTango, valid_input2)
{
  string s_in = "  ";
  string s_out;
  reverseTango(s_in, s_out);
  ASSERT_EQ(s_out, "  ");
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}