 
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "velha.hpp"

TEST_CASE( "X should win", "[checkwinner]" ) {
    int board[3][3] = {
        {1, 1, 1},
        {0, 2, 2},
        {2, 1, 0}
    };
    REQUIRE(xWinner(board));
    REQUIRE(checkWinner(board) == 1);
}

TEST_CASE( "O should win", "[checkwinner]" ) {
    int board[3][3] = {
        {2, 0, 1},
        {2, 1, 0},
        {2, 1, 0}
    };
    REQUIRE(oWinner(board));
    REQUIRE(checkWinner(board) == 2);
}

TEST_CASE( "Impossible game", "[checkwinner]" ) {
    int board[3][3] = {
        {2, 2, 1},
        {1, 1, 2},
        {2, 1, 2}
    };
    REQUIRE(checkImpossible(board));
    REQUIRE(checkWinner(board) == -2);
}
