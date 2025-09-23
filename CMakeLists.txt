cmake_minimum_required(VERSION 3.10)
project(lab1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror=maybe-uninitialized")

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.15.0
  TLS_VERIFY false
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_library(${CMAKE_PROJECT_NAME}_lib src/numbers_from_string.cpp)
target_include_directories(${CMAKE_PROJECT_NAME}_lib PRIVATE include)
add_executable(${CMAKE_PROJECT_NAME}_exe lab1.cpp)

target_link_libraries(${CMAKE_PROJECT_NAME}_exe PRIVATE ${CMAKE_PROJECT_NAME}_lib)

# Добавление тестов
add_executable(tests test/tests.cpp) 

target_link_libraries(tests PRIVATE ${CMAKE_PROJECT_NAME}_lib gtest_main)

enable_testing()

add_test(NAME MyProjectTests COMMAND tests)