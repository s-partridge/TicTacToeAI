#include "player.h"

Player::Player(Controller *controller, PlayerType side)
    : m_controllerPointer(controller), m_side(side)
{

}

Player::Player(Controller *controller)
    :m_controllerPointer(controller)
{

}

void Player::makeMove(int x, int y)
{
    m_controllerPointer->updateBoard(x, y);
}
