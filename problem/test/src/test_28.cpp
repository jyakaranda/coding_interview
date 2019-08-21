#include <gtest/gtest.h>
#include "28.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

TEST(permutation, valid_input)
{
  string s_in = "asdf1234";
  vector<string> v_out;
  permutation(s_in, v_out);
  for_each(v_out.begin(), v_out.end(), [](const string &s) { cout << s << endl; });
  ASSERT_EQ(v_out.size(), 40320);
}
TEST(permutation, valid_input1)
{
  string s_in = "aab";
  vector<string> v_out;
  permutation(s_in, v_out);
  for_each(v_out.begin(), v_out.end(), [](const string &s) { cout << s << endl; });
  ASSERT_EQ(v_out.size(), 3);
}

TEST(composition, valid_input)
{
  string s_in = "asdf1234";
  vector<string> v_out;
  composition(s_in, v_out);
  for_each(v_out.begin(), v_out.end(), [](const string &s) { cout << s << endl; });
}

TEST(composition, valid_input1)
{
  string s_in = "abbc";
  vector<string> v_out;
  composition(s_in, v_out);
  for_each(v_out.begin(), v_out.end(), [](const string &s) { cout << s << endl; });
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}