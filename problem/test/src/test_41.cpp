#include <gtest/gtest.h>
#include "41.h"
#include <vector>

using namespace std;

TEST(two_sum_equal, valid_input)
{
  vector<int> v_in({-1, 2, 3, 4, 5});
  int s = 3;
  int a, b;
  twoSumEqual(v_in, s, a, b);
  ASSERT_EQ(a, 0);
  ASSERT_EQ(b, 3);
}

TEST(two_sum_equal, valid_input1)
{
  vector<int> v_in({-1, 2, 3, 4, 5});
  int s = 5;
  int a, b;
  twoSumEqual(v_in, s, a, b);
  ASSERT_EQ(a, 1);
  ASSERT_EQ(b, 2);
}

TEST(two_sum_equal, valid_input2)
{
  vector<int> v_in({-1, 2, 3, 4, 5});
  int s = 10;
  int a, b;
  twoSumEqual(v_in, s, a, b);
  ASSERT_EQ(a, -1);
  ASSERT_EQ(b, -1);
}

TEST(sequenceSumEqual, valid_input)
{
  int s = 15;
  vector<vector<int>> v_out;
  sequenceSumEqual(s, v_out);
  for (int i = 0; i < v_out.size(); ++i)
  {
    for (int j = 0; j < v_out[i].size(); ++j)
    {
      cout << v_out[i][j] << ", ";
    }
    cout << endl;
  }
  ASSERT_EQ(v_out.size(), 3);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}