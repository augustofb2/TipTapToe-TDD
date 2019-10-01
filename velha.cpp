#include "velha.hpp"

int checkWinner(int board[][3])
    {
        if(xWinner(board))
            return 1;
        
        return 0;
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

