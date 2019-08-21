#include <gtest/gtest.h>
#include "30.h"
#include <vector>
#include <iostream>

using namespace std;

TEST(min_k_nums, valid_input)
{
  vector<int> v_in({4, 5, 1, 6, 2, 7, 3, 8});
  int k = 4;
  vector<int> v_out;
  minKNums(v_in, k, v_out);
  ASSERT_EQ(v_out.size(), k);
  for_each(v_out.begin(), v_out.end(), [](int n) { cout << n << " "; });
}

TEST(min_k_nums, valid_input1)
{
  vector<int> v_in({4, 5, 1, 6, 2, 7, 3, 8});
  int k = 3;
  vector<int> v_out;
  minKNums(v_in, k, v_out);
  ASSERT_EQ(v_out.size(), k);
  for_each(v_out.begin(), v_out.end(), [](int n) { cout << n << " "; });
}

TEST(min_k_nums, valid_input2)
{
  vector<int> v_in({4, 5, 1, 6, 2, 7, 3, 8});
  int k = 9;
  vector<int> v_out;
  minKNums(v_in, k, v_out);
  ASSERT_EQ(v_out.size(), 8);
  for_each(v_out.begin(), v_out.end(), [](int n) { cout << n << " "; });
}

TEST(min_k_nums1, valid_input)
{
  vector<int> v_in({4, 5, 1, 6, 2, 7, 3, 8});
  int k = 5;
  vector<int> v_out;
  minKNums1(v_in, k, v_out);
  ASSERT_EQ(v_out.size(), k);
  for_each(v_out.begin(), v_out.end(), [](int n) { cout << n << " "; });
}

TEST(make_heap, valid_input)
{
  vector<int> v_in({4, 5, 1, 6, 2, 7, 3, 8});
  makeHeap(v_in);
  for_each(v_in.begin(), v_in.end(), [](int n) { cout << n << " "; });
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}