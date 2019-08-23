#include <gtest/gtest.h>
#include "40.h"
#include <vector>

using namespace std;

TEST(unique_2num, valid_input)
{
  vector<int> v_in({2, 3, 4, 6, 3, 5, 5, 4});
  int a, b;
  unique2Num(v_in, a, b);
  ASSERT_EQ(a ^ b, 4);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}