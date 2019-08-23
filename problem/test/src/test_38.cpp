#include <gtest/gtest.h>
#include "38.h"
#include <vector>

using namespace std;

TEST(count, valid_input)
{
  vector<int> v_in({1, 2, 3, 3, 3, 3, 4, 5});
  int n = 3;
  ASSERT_EQ(count(v_in, n), 4);
}

TEST(count, valid_input1)
{
  vector<int> v_in({1, 2, 3, 3, 3, 3, 4, 5});
  int n = 1;
  ASSERT_EQ(count(v_in, n), 1);
}

TEST(count, valid_input2)
{
  vector<int> v_in({1, 2, 3, 3, 3, 3, 4, 5});
  int n = 0;
  ASSERT_EQ(count(v_in, n), 0);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}