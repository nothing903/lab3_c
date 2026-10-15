#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "../src/interpolation.h"

TEST_CASE("Newton Interpolation - Catch2") {
    std::vector<double> x = {0, 1, 2};
    std::vector<double> y = {1, 2, 5};  // y = x^2 + 1

    REQUIRE(newton_interpolation(x, y, 3.0) == Approx(10.0));
    REQUIRE(newton_interpolation(x, y, 1.5) == Approx(3.25));
    REQUIRE(newton_interpolation(x, y, 0.0) == Approx(1.0));
}