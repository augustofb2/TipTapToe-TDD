 
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "velha.hpp"

TEST_CASE( "X should win", "[checkwinner]" ) {
    int board[3][3] = {
        {1, 1, 1},
        {0, 2, 2},
        {2, 1, 0}
    };
    REQUIRE(checkWinner(board) == 1);
}
