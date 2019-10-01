#include "velha.hpp"

int checkWinner(int board[][3])
{
    if(checkImpossible(board))
        return -2;
    if(xWinner(board))
        return 1;
    if(oWinner(board))
        return 2;
    if(isDraw(board))
        return 0;
    
    return 10;
}
    
bool xWinner(int board[][3])
{
    int i;
    for(i = 0; i<3; i++){
        if(board[i][0] == 1 && board[i][1] == 1 && board[i][2] == 1){
            return true;
        }
    }
    for(i = 0; i<3; i++){
        if(board[0][i] == 1 && board[1][i] == 1 && board[2][i] == 1){
            return true;
        }
    }
    if(board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 1)
        return true;
    if(board[0][2] == 1 && board[1][1] == 1 && board[2][0] == 1)
        return true;
    
    return false;
}

bool oWinner(int board[][3])
{
    int i;
    for(i = 0; i<3; i++){
        if(board[i][0] == 2 && board[i][1] == 2 && board[i][2] == 2){
            return true;
        }
    }
    for(i = 0; i<3; i++){
        if(board[0][i] == 2 && board[1][i] == 2 && board[2][i] == 2){
            return true;
        }
    }
    if(board[0][0] == 2 && board[1][1] == 2 && board[2][2] == 2)
        return true;
    if(board[0][2] == 2 && board[1][1] == 2 && board[2][0] == 2)
        return true;
    
    return false;
}

bool checkImpossible(int board[][3])
{
    int i, j;
    int xCount = 0, oCount = 0;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(board[i][j] == 1)
                xCount++;
            else if(board[i][j] == 2)
                oCount++;
        }
    }
    if(oCount > xCount || oCount < xCount - 1)
        return true;
    
    return false;
}

bool isDraw(int board[][3])
{
    int i, j;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(board[i][j] == 0)
                return false;
        }
    }
    return true;
}
