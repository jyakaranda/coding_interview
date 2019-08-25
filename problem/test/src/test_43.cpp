#include <gtest/gtest.h>
#include "43.h"
#include <vector>

using namespace std;

TEST(nDices, valid_input)
{
  int n = 1;
  vector<double> v_out;
  nDices(n, v_out);
  for_each(v_out.begin(), v_out.end(), [](double n) { cout << n << " "; });
  ASSERT_FLOAT_EQ(v_out[0], pow(1.0 / 6, n));
}

TEST(nDices, valid_input1)
{
  int n = 5;
  vector<double> v_out;
  nDices(n, v_out);
  for_each(v_out.begin(), v_out.end(), [](double n) { cout << n << " "; });
  ASSERT_FLOAT_EQ(v_out[0], pow(1.0 / 6, n));
}

TEST(nDices2, valid_input)
{
  int n = 1;
  vector<double> v_out;
  nDices2(n, v_out);
  for_each(v_out.begin(), v_out.end(), [](double n) { cout << n << " "; });
  ASSERT_FLOAT_EQ(v_out[0], pow(1.0 / 6, n));
}

TEST(nDices2, valid_input1)
{
  int n = 10;
  vector<double> v_out;
  nDices2(n, v_out);
  for_each(v_out.begin(), v_out.end(), [](double n) { cout << n << " "; });
  ASSERT_FLOAT_EQ(v_out[0], pow(1.0 / 6, n));
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}