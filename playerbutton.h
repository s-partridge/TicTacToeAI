#ifndef PLAYERBUTTON_H
#define PLAYERBUTTON_H

#include "datatypes.h"

#include <QPushButton.h>

class PlayerButton : public QPushButton
{
    Q_OBJECT

public:
    PlayerButton();
    PlayerButton(QWidget *parent);
    void setPlayerID(PlayerType PID) { m_playerID = PID; }

signals:
    //Should be used when the current player needs to be set to the ID
    //stored in this button.
    void changeCurrentPlayer(PlayerType PID);

public slots:
    //This slot is to take control of what happens when the button is
    //pressed and to emit controlled signals.
    void actionOnClick();
    void setButtonText(QString text) { setText(text); }

private:
    PlayerType m_playerID;
};

#endif // PLAYERBUTTON_H
