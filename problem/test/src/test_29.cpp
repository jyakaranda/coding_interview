#include <gtest/gtest.h>
#include <29.h>
#include <vector>

using namespace std;

TEST(over_half_times, valid_input)
{
  vector<int> v_in({1, 2, 3, 2, 2, 2, 5, 4, 2});
  int ans = overHalfTimes(v_in);
  ASSERT_GT(ans, -1);
  ASSERT_EQ(v_in[ans], 2);
}

TEST(over_half_times, valid_input1)
{
  vector<int> v_in({1, 2, 3, 2, 2, 2, 5, 4});
  int ans = overHalfTimes(v_in);
  ASSERT_EQ(ans, -1);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}