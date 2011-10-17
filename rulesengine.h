#ifndef RULESENGINE_H
#define RULESENGINE_H

#include "gamegrid.h"

class RulesEngine
{
public:
    RulesEngine() {}
    GameState testBoard(Grid boardState);
/*
private:
    GameState m_gameState;
*/
};

#endif // RULESENGINE_H
