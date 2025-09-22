#include <gtest/gtest.h>
#include "../include/numbers_from_string.h"

TEST(test_01, basic_test_set) {
    ASSERT_EQ(numbers_from_string("a453n543c"), "453\n543\n");
}

TEST(test_02, basic_test_set) {
    ASSERT_EQ(numbers_from_string("asdadvvvfdvd"), "");
}

TEST(test_03, basic_test_set) {
    ASSERT_EQ(numbers_from_string("123543534"), "123543534\n");
} 

TEST(test_04, basic_test_set) {
    ASSERT_EQ(numbers_from_string("123dsa432"), "123\n432\n");
}   

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}