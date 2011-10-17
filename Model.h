#ifndef MODEL_H
#define MODEL_H

#include "gamegrid.h"

class Model
{
public:
    //Returns the state of the board at a specific turn number.
    Grid getMove(int turnNumber) { return m_game[turnNumber]; }
    //Sets the state of the board at a specific turn number.
    void setMove(int turnNumber, Grid currentGrid) { m_game[turnNumber] = currentGrid; }

private:
    Grid m_game[10];    //There are 10 possible moves in a game of
                        //tic-tac-toe: the blank board and one per filled square.
};

#endif // MODEL_H
