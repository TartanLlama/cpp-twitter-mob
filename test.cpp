#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "ourlib.hpp"

using namespace ourlib::detail;

TEST_CASE("Can call safe_stoi.") {
    safe_stoi("42");
}

TEST_CASE("A one in quotes should return a 1") {
    REQUIRE(safe_stoi("1") == 1);
}

TEST_CASE("A two in quotes should return a 2") {
    REQUIRE(safe_stoi("2") == 2);
}

TEST_CASE("A negative two in quotes should return a -2") {
    REQUIRE(safe_stoi("-2") == -2);
}

TEST_CASE("Not a valid number returns tl::nullopt") {
    REQUIRE(safe_stoi("bacon") == tl::nullopt);
}

TEST_CASE("Just in range number returns number") {
    REQUIRE(safe_stoi("2147483647") == 2147483647);
}

TEST_CASE("Out of range number returns tl::nullopt") {
    REQUIRE(safe_stoi("2147483648") == tl::nullopt);
}