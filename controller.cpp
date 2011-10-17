#include "controller.h"

Controller::Controller(Model *model)
{
    //Connect the controller to the model and view.
    m_modelPointer = model;
    m_turnNumber = 0;
    m_currentPlayer = EMPTY;
}

GameState Controller::updateBoard(int x, int y)
{
    ++m_turnNumber;
    m_currentState.squares[x][y] = m_currentPlayer;
    m_modelPointer->setMove(m_turnNumber, m_currentState);

    return rulesEngine.testBoard(m_currentState);
}

Grid Controller::ResetBoard(int &turnNumber)
{
    if(turnNumber >=0 && turnNumber < 10)
    {
        m_currentState = m_modelPointer->getMove(turnNumber);
        m_turnNumber = turnNumber;
    }
    else
    {
        m_currentState.init();
        m_turnNumber = 0;
    }

    return m_currentState;
}

int Controller::setPlayerID(PlayerType player)
{
    if(player >= EMPTY && player <= OPLAYER)
    {
        m_currentPlayer = player;
        return 0;
    }

    return 1;
}
