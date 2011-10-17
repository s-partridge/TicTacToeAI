#include "rulesengine.h"

GameState RulesEngine::testBoard(Grid boardState)
{
    int x, y;

    //Check from the middle of the board out.
    if(boardState.squares[1][1] != EMPTY)
    {
        for(x = 0; x < 3; ++x)
        {
            if(boardState.squares[x][0] == boardState.squares[1][1] && boardState.squares[2 - x][2] == boardState.squares[1][1])
                //Cast the center square to GameState to simplify algorithm.
                return (GameState)boardState.squares[1][1];
        }
    }

    //Check the squares connected to the top left corner.
    if(boardState.squares[0][0] != EMPTY)
    {
        if(boardState.squares[0][1] == boardState.squares[0][0] && boardState.squares[0][2] == boardState.squares[0][0] ||
           boardState.squares[1][0] == boardState.squares[0][0] && boardState.squares[2][0] == boardState.squares[0][0])
        {
            return (GameState)boardState.squares[0][0];
        }
    }

    //Check the squares connected to the bottom right corner.
    if(boardState.squares[2][2] != EMPTY)
    {
        if(boardState.squares[2][0] == boardState.squares[2][2] && boardState.squares[2][1] == boardState.squares[2][2] ||
           boardState.squares[0][2] == boardState.squares[2][2] && boardState.squares[1][2] == boardState.squares[2][2])
        {
            return (GameState)boardState.squares[0][0];
        }
    }

    //Check for cat's game.
    for(x = 0; x < 3; ++x)
    {
        for(y = 0; y < 3; ++y)
        {
            //This is true because if a player had three in a row, it would have been caught before this loop ran.
            if(boardState.squares[x][y] == EMPTY)
                return NORMAL;
        }
    }

    //This will only occur if all the above checks fail.
    return CATSGAME;
}
