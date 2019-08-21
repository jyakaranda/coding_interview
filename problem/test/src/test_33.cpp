#include <gtest/gtest.h>
#include "33.h"
#include <vector>
#include <string>

using namespace std;

TEST(range_min, valid_input)
{
  vector<int> v_in({3, 32, 321});
  string s_out;
  rangeMin(v_in, s_out);
  ASSERT_EQ(s_out, "321323");
}

TEST(range_min, valid_input1)
{
  vector<int> v_in({12, 11, 34, 2});
  string s_out;
  rangeMin(v_in, s_out);
  ASSERT_EQ(s_out, "1112234");
}

TEST(range_min, valid_input2)
{
  vector<int> v_in({12, 10, 0, 2});
  string s_out;
  rangeMin(v_in, s_out);
  ASSERT_EQ(s_out, "10122");
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}