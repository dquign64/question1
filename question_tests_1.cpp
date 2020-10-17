#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"
#include "question1.cpp"
#include "main.cpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
TEST_CASE("Test get_fahrenheit function"){
	REQUIRE(get_fahrenheit(37)==98.6); 
	REQUIRE(get_fahrenheit(0)==32);
	REQUIRE(get_fahrenheit(25)==77);
}