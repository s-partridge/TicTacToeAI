#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Model.h"
#include "datatypes.h"
#include "rulesengine.h"

class Controller
{
public:
    Controller(Model *model);
    Grid getBoard() { return m_currentState; }

    //Adds the next move to the board state.
    //Update the current board state, save it to the model,
    //and test the state with the rules engine to see if the game is over.
    GameState updateBoard(int x, int y);

    //Resets the board to its state at turnNumber.
    //Resets the board to a blank state if turnNumber is invalid.
    Grid ResetBoard(int &turnNumber);

    PlayerType getPlayerID() { return m_currentPlayer; }
    //Sets the player ID.  Returns 1 if the ID value was invalid.
    int setPlayerID(PlayerType player);
    GameState checkBoard(Grid boardState) { return rulesEngine.testBoard(boardState); }
private:
    //Contains the current state of the board.
    Grid m_currentState;
    RulesEngine rulesEngine;

    //x, o, or none.  None is used when resetting the board.
    PlayerType m_currentPlayer;
    Model *m_modelPointer;
    int m_turnNumber;   //The current turn number.
};

#endif // CONTROLLER_H
