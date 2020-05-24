#define CATCH_CONFIG_MAIN
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <vector>
#include "../src/func.h"
#include "catch.hpp"
TEST_CASE("Perimeters are computed", "[perimeters]")
{
    const float r = 1;
    const float result = perimeters(r);
    const float expected = 6.28;
    REQUIRE( expected== result );
}

TEST_CASE("Areas are computed", "[areas]")
{
    const float r = 1;
    const float result = areas(r);
    const float expected = 3.14;
    REQUIRE( expected== result );
}

TEST_CASE("Input check Circle", "[proverka]")
{
	int k=0,b=0;
	const int d=1;
	const int n=-1;
	string com="circle";
	string comm="square";
    k=proverka(com);
    b=proverka(comm);
    REQUIRE(k==d);
    REQUIRE(b==n);
}
