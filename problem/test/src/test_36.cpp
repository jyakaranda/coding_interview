#include <gtest/gtest.h>
#include "36.h"
#include <vector>

using namespace std;

TEST(inverse_pair, valid_input)
{
  vector<int> v_in({7, 5, 6, 4});
  ASSERT_EQ(inversePair(v_in), 5);
}

TEST(inverse_pair, valid_input1)
{
  vector<int> v_in({8, 5, 3, 4, 7, 6, 2});
  ASSERT_EQ(inversePair(v_in), 14);
}

TEST(inverse_pair, valid_input2)
{
  vector<int> v_in({1, 2, 3});
  ASSERT_EQ(inversePair(v_in), 0);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}