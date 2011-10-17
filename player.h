//
//  File:           player.h
//  Author:         Samuel Partridge
//  Project:        Tic-Tac-Toe Prototype
//
//  Description:    Defines an interface for either a human or an AI player.
//                  The view should connect to this to represent human inputs to the system.
//                  The player class will call out to the controller to make moves.
//                  The AIController class will allow a neural network to make the same calls,
//                  allowing the system to switch between human and AI players on the fly.
//

#ifndef PLAYER_H
#define PLAYER_H

#include "datatypes.h"
#include "controller.h"

class Player
{
public:
    Player(Controller *controller, PlayerType side);
    Player(Controller *controller);

    //An action to tell the player to make a move.
    //Human players will simply look at the screen and click.
    virtual void yourTurn() {}
    void makeMove(int x, int y);

protected:
    Controller *m_controllerPointer;

    PlayerType m_side;
};

#endif // PLAYER_H
