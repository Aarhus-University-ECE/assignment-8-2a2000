project(tests)

include_directories(include)
add_executable(tests src/tests.cpp)
target_link_libraries(tests mymath)
target_compile_options(tests PUBLIC -g -O0)

add_test(usage_test tests)