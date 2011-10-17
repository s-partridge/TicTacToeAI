//
//  File:           neuralnetwork.h
//  Author:         Samuel Partridge
//  Project:        Tic-Tac-Toe Prototype
//
//  Description:    Contains the declarations for the Neuron and NeuralNetwork classes.
//                  Neuron stores a list of weights used in a neural network to calculate outputs.
//                  When initialized, a number of weights is given by the calling function.
//                  Because the bias is included in all neurons, space will be added by init() to
//                  accomodate it.  The bias slot should NOT be added by the calling function.
//
//                  The neural network class combines neurons into layers
//                  to be trained and used to find solutions to problems.
//


#ifndef NEURALNETWORK_H
#define NEURALNETWORK_H

#define NEURAL_NET_VERSION 1

#include <fstream>

using namespace std;

//TODO: make constructor private and add NeuralNetwork as a friend.
//Neurons should not be used outside of a network.

class Neuron
{
public:
    Neuron();

    int init(const int &numWeights);
    void empty() { delete [] m_weights; }

    ~Neuron();
    void setWeight(const int &index, const float &value) { m_weights[index] = value; }
    float getWeight(const int &index) { return m_weights[index]; }

    //This will change the weights and bias of the neuron based on blame
    //and the a learning rate from the neural network.
    void changeWeights(const float &learningRate, const float &blame);

    //Because the bias is in the last array index, it is slightly faster to
    //access it with these functions than with those above.  This way, an index number does not have
    //to be passed to the function.
    void setBias(const float &value) { m_weights[m_numWeights - 1] = value; }
    float getBias() { return m_weights[m_numWeights - 1]; }

    void setInput(const int &index, const float &value) { m_inputs[index] = value; }

    //TODO: Replace this with the actual activation function.
    float activationFunction();

private:
    //Stores the weights for inputs to the neuron and the bias.
    //The bias is the most likely to be accessed, so it will be stored in the first index.
    float *m_weights;
    float *m_inputs;
    int m_numWeights;
    int m_numInputs;
    //It is necessary to keep track of the last inputs and output for
    //adjusting weights and biases during backpropagation.
    float m_output;
};

class NeuralNetwork
{
public:
    //This will open a file if it exists.  Calling function should make sure the file exists
    //before executing.
    NeuralNetwork(string fileName);

    //This will create a file and use it to store the parameters for the network.  Calling function
    //should make sure the file does not exist before executing.
    NeuralNetwork(string fileName, const int &numInputs, const int &numHiddenNeurons, const int &numOutputNeurons, const float &learningRate);

    ~NeuralNetwork();

    //Write the neural network back to its file.
    void saveNNP();

    //Calculate a result based on a set of inputs to the system.
    float *findResult(const float *inputs);

    //Get or set the learning rate.
    void setLearningRate(const float &learningRate) { m_learningRate = learningRate; }
    float getLearningRate() { return m_learningRate; }

    //Change the weights of the system by comparing the expected outputs
    //to the actual outputs.  expectedOutput is expected to contain as many
    //elements as there are output neurons.
    void backpropagate(const float *expectedOutput, const float *actualOutput);

    void shouldLearn(const bool &learning) { m_learning = learning; }

private:
    Neuron *m_hiddenLayer;      //Array to store the hidden layer of neurons.
    Neuron *m_OutputLayer;      //Stores the output neurons.
    string m_fileName;          //Name of the file containing neural net data.
    int m_numInputs;            //Number of inputs to the system.
    int m_numHiddenNeurons;     //Number of neurons in hidden layer.
    int m_numOutputNeurons;     //Number of neurons in the output layer.
    float m_learningRate;       //The value to use when adjusting weights in the neurons.
    bool m_learning;            //When false, backpropagation will be disabled.

};

//If at some point I decide to use a mutli-layer network, I will create a subclass to accomodate it.
//Based on the research I've done, a second hidden layer will not likely be necessary.

#endif // NEURALNETWORK_H
