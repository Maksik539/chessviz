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


