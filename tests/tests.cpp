#include "../math/mul.h"
#include "../math/sum.h"
#include "../math/minus.h"
#include "../meta/meta.h"
#include <gtest/gtest.h>
#include "gmock/gmock.h"
using ::testing::StartsWith;
TEST(PLUS, double) {
    double a = 1.2;
    EXPECT_EQ(sum(0.6, 0.6), 1.2);
}
TEST(PLUS, int) {
    int a = 2;
    EXPECT_EQ(sum(1, 1), 2);
}
TEST(MINUS, double) {
    double a = 1.2;
    EXPECT_EQ(minus(1.6, 0.4), 1.2);
}
TEST(MINUS, int) {
    int a = 2;
    EXPECT_EQ(minus(3, 1), 2);
}
TEST(MUL, double) {
    double a = 1.2;
    EXPECT_EQ(minus(1.2, 1.0), 1.2);
}
TEST(MUL, int) {
    int a = 2;
    EXPECT_EQ(minus(2, 1), 2);
}