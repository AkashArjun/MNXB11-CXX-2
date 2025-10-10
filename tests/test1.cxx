#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>

#include "as1.hpp"

TEST_CASE("1.1 swap three raw pointers") {
  int a = 1;
  int b = 2;
  int c = 3;
  homework::swap_ptr(&a, &b, &c);
  REQUIRE(a == 2);
  REQUIRE(b == 3);
  REQUIRE(c == 1);
}

TEST_CASE("Smart pointer 1.2") {
  homework::UniqueData o{42};
  REQUIRE(o.get() == 42);
  o.set(99);
  REQUIRE(o.get() == 99);
}

