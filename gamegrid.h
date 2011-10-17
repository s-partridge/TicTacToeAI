#ifndef GAMEGRID_H
#define GAMEGRID_H

#include "datatypes.h"

struct Grid
{
    void init();
    PlayerType squares[3][3];
};

#endif // GAMEGRID_H
