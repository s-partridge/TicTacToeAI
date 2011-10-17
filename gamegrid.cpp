#include "gamegrid.h"

void Grid::init()
{
    for(int x = 0; x < 3; ++x)
    {
        squares[x][0] = EMPTY;
        squares[x][1] = EMPTY;
        squares[x][2] = EMPTY;
    }
}
