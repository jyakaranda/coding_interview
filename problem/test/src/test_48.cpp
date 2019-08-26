#include <gtest/gtest.h>
#include "48.h"

TEST(cant_derive, valid_input)
{
  Derived d = ;
  Base b = Base::get2();
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}