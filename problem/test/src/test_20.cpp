#include <gtest/gtest.h>
#include "20.h"
#include <vector>

using namespace std;

TEST(print_clock_wise, valid_input)
{
  vector<vector<int>> v_2d({{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}});
  printClockWise(v_2d);
}

TEST(print_clock_wise, valid_input1)
{
  vector<vector<int>> v_2d({{1, 2, 3, 4}, {5, 6, 7, 8}});
  printClockWise(v_2d);
}

TEST(print_clock_wise, valid_input2)
{
  vector<vector<int>> v_2d({{1, 2}, {3, 4}, {5, 6}, {7, 8}});
  printClockWise(v_2d);
}

TEST(print_clock_wise, valid_input3)
{
  vector<vector<int>> v_2d({{}, {}});
  printClockWise(v_2d);
}

TEST(print_clock_wise, valid_input4)
{
  vector<vector<int>> v_2d({{1}});
  printClockWise(v_2d);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}