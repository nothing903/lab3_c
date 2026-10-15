#include <gtest/gtest.h>
#include "../src/interpolation.h"

TEST(NewtonInterpolationTest, BasicPoints) {
    std::vector<double> x = {0, 1, 2};
    std::vector<double> y = {1, 2, 5};

    EXPECT_NEAR(newton_interpolation(x, y, 3.0), 10.0, 1e-9);
    EXPECT_NEAR(newton_interpolation(x, y, 1.5), 3.25, 1e-9);
    EXPECT_NEAR(newton_interpolation(x, y, 0.0), 1.0, 1e-9);
}