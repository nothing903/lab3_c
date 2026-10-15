# CMake generated Testfile for 
# Source directory: /workspaces/lab3_c
# Build directory: /workspaces/lab3_c/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(Catch2Test "/workspaces/lab3_c/build/test_catch2")
set_tests_properties(Catch2Test PROPERTIES  _BACKTRACE_TRIPLES "/workspaces/lab3_c/CMakeLists.txt;33;add_test;/workspaces/lab3_c/CMakeLists.txt;0;")
add_test(GTestTest "/workspaces/lab3_c/build/test_gtest")
set_tests_properties(GTestTest PROPERTIES  _BACKTRACE_TRIPLES "/workspaces/lab3_c/CMakeLists.txt;34;add_test;/workspaces/lab3_c/CMakeLists.txt;0;")
subdirs("_deps/catch2-build")
subdirs("_deps/googletest-build")
