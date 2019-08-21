#include <gtest/gtest.h>
#include "34.h"
#include <iostream>
#include "tictoc.h"

using namespace std;

TEST(ugly_num, valid_input)
{
  int nth = 1500;
  TicToc t_ext;
  int ans = uglyNum(nth);
  cout << ans << ", time: " << t_ext.toc() << "ms" << endl;
  ASSERT_EQ(ans, 859963392);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}