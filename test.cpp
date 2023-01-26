#define CATCH_CONFIG_MAIN

#include <vector>
#include "catch.hpp"
#include "functions_to_implement.cpp"

bool compare_double(double x, double y, double epsilon = 0.0000001f){
    return (fabs(x - y) < epsilon);
}

TEST_CASE( "Fibonacci sequence is computed", "[NthFibonacci]" ) {
    REQUIRE( NthFibonacci(1) == 1 );
    REQUIRE( NthFibonacci(2) == 1 );
    REQUIRE( NthFibonacci(3) == 2 );
    REQUIRE( NthFibonacci(5) == 5 );
}

TEST_CASE( "Multiples are computed", "[Multiples]" ) {
    double mult1[2] = {3.1, 3.0};
    std::vector<double> result1{3.1, 6.2, 9.3};

    REQUIRE( Multiples(mult1[0], mult1[1]) == result1 );
}

TEST_CASE( "SubtractN are computed", "[SubtractN]" ) {
    std::vector<double> v_init{4.4,8.1,17.4};
    std::vector<double> v_expect{-0.4,3.3,12.6};

    REQUIRE( compare_double(SubtractN(v_init, 4.8)[0], v_expect[0]) );
    REQUIRE( compare_double(SubtractN(v_init, 4.8)[1], v_expect[1]) );
    REQUIRE( compare_double(SubtractN(v_init, 4.8)[2], v_expect[2]) );
}
