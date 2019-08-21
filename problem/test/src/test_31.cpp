#include <gtest/gtest.h>
#include "31.h"
#include <vector>

using namespace std;

TEST(max_cons_sub_seq_sum, valid_input)
{
  vector<int> v_in({4, 3, -2, 5, -7, 4, -5, 2});
  ASSERT_EQ(maxConsSubSeqSum(v_in), 10);
}

TEST(max_cons_sub_seq_sum, valid_input1)
{
  vector<int> v_in({1, -2, 3, 10, -4, 7, 2, -5});
  ASSERT_EQ(maxConsSubSeqSum(v_in), 18);
}

TEST(max_cons_sub_seq_sum, valid_input2)
{
  vector<int> v_in({-2, -3, 0, -1});
  ASSERT_EQ(maxConsSubSeqSum(v_in), 0);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}