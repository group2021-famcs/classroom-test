#include <gtest/gtest.h>
#include <gmock/gmock.h>


double GetSum(const std::vector<double>& values);

void BubbleSort(std::vector<std::string>& values);


TEST(TestGetSum, Sample) {
    ASSERT_DOUBLE_EQ(GetSum({1, 0, 2.5, 1.5, 1}), 6.0);
    ASSERT_DOUBLE_EQ(GetSum({}), 0.0);
}

TEST(TestSort, Sample) {
    std::vector<std::string> a{"aa", "bb", "ba", "ab", "abb"};
    BubbleSort(a);
    ASSERT_THAT(a, testing::ElementsAre("aa", "ab", "abb", "ba", "bb"));
}
