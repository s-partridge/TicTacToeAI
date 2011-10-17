#ifndef AICONTROLLER_H
#define AICONTROLLER_H

#include "player.h"
#include "gamegrid.h"
#include "neuralnetwork.h"
#include "datatypes.h"

class AIController : public Player
{
public:
    //Initialize the controller with either an existing neural net or
    //create a new one.
    AIController(Controller *controller, PlayerType side, string fileName);
    AIController(Controller *controller, PlayerType side, string fileName, const int &numInputs, const int &numHiddenNeurons, const int &numOutputNeurons, const float &learningRate);

    //Override the yourTurn method in the base class.
    //Call the controller for the board state, parse it,
    //feed it through the Neural Network, and send it a result.
    virtual void yourTurn();

private:
    NeuralNetwork m_neuralNet;
};

#endif // AICONTROLLER_H
