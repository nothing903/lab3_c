cmake_minimum_required(VERSION 3.14)
project(Lab3Interpolation CXX)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

# Catch2
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v2.13.10
)
FetchContent_MakeAvailable(Catch2)

# Google Test
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.12.1
)
FetchContent_MakeAvailable(googletest)

add_library(interpolation_lib src/interpolation.cpp)

add_executable(test_catch2 tests/test_catch2.cpp)
target_link_libraries(test_catch2 PRIVATE interpolation_lib Catch2::Catch2)

add_executable(test_gtest tests/test_gtest.cpp)
target_link_libraries(test_gtest PRIVATE interpolation_lib GTest::gtest_main)

enable_testing()
add_test(NAME Catch2Test COMMAND test_catch2)
add_test(NAME GTestTest COMMAND test_gtest)