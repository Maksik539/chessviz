#define CATCH_CONFIG_MAIN
#include "../src/func.h"
#include "../thirdparty/catch.hpp"
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <vector>
TEST_CASE("Perimeters are computed", "[perimeters]")
{
    const float r = 1;
    const float result = perimeters(r);
    const float expected = 6.28;
    REQUIRE(expected == result);
}

TEST_CASE("Areas are computed", "[areas]")
{
    const float r = 1;
    const float result = areas(r);
    const float expected = 3.14;
    REQUIRE(expected == result);
}

TEST_CASE("Input check Circle", "[proverka]")
{
    int k = 0, b = 0;
    const int d = 1;
    const int n = -1;
    string com = "circle";
    string comm = "square";
    k = proverka(com);
    b = proverka(comm);
    REQUIRE(k == d);
    REQUIRE(b == n);
}

TEST_CASE("Taking parameters from input", "[get_num]")
{
    string a = "circle(1, 2, 3)";
    const int start_pos = 7;
    const int pos0 = 0;
    const int pos1 = 1;
    const int pos2 = 2;
    REQUIRE(get_num(a, pos0, start_pos) == 1);
    REQUIRE(get_num(a, pos1, start_pos) == 2);
    REQUIRE(get_num(a, pos2, start_pos) == 3);
}
