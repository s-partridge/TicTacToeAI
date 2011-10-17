#include "playerbutton.h"

PlayerButton::PlayerButton()
{
    m_playerID = EMPTY;
}

PlayerButton::PlayerButton(QWidget *parent) : QPushButton(parent)
{
    m_playerID = EMPTY;
    //The GUI creator cannot directly connect click actions to custom signals.
    //Therefore, I needed to connect the click manually to a slot that calls
    //my custom signal -- changeCurrentPlayer();
    connect(this, SIGNAL(released()), this, SLOT(actionOnClick()));
}

void PlayerButton::actionOnClick()
{
    //Send out a signal with the value to change.
    emit changeCurrentPlayer(m_playerID);
}
