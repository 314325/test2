#include "gtest/gtest.h"
TEST(IncreaseVectorTest, IncreaseElements) {
  vector<int> vec = {1, 2, 3, 4, 5};
  int n = 1;
  vector<int> expected = {2, 3, 4, 5, 6};
  vector<int> result = increaseVector(vec, n);
  ASSERT_EQ(result, expected);
}
