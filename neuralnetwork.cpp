#include "neuralnetwork.h"

//For rand() and time-based seed.
#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <cmath>

//Euler's number, as precise as a long double variable will allow.
#define e 2.7182818284590452

Neuron::Neuron()
{
    m_weights = 0;
    m_inputs = 0;
}

int Neuron::init(const int &numWeights)
{
    //Make sure the array is empty.
    if(m_weights == 0)
    {
        //Allocate space for the weights and the bias.
        m_numWeights = numWeights + 1;
        m_weights = new float[m_numWeights];
    }
    //The array already exists.
    else
        return 1;

    if(m_inputs == 0)
    {
        //There should be one weight per input.
        //There is no input for the bias.
        m_numInputs = numWeights;
        m_inputs = new float[m_numWeights];
    }
    //The array already exists.
    else
        return 2;

    return 0;
}

Neuron::~Neuron()
{
    empty();
}

float Neuron::activationFunction()
{
    //Sum up inputs, use them in the (possibly sigmoid) function.

    int x;

    m_output = 0.0f;

    //Multiply each weight by its corresponding input.  Sum together.
    for(x = 0; x < m_numInputs; ++x)
    {
        m_output += m_inputs[x] * m_weights[x + 1];
    }

    //The bias.
    m_output += m_weights[x];

    //Run the inputs through the activation function.
    //In this case, the sigmoid function.
    m_output = (float)1 / (1 + (float)pow((double)e, -((double)m_output)));

    //Spit out the result.
    return m_output;
}

void Neuron::changeWeights(const float &learningRate, const float &blame)
{
    float derivative;
    for(int x = 0; x < m_numInputs; ++x)
    {
        derivative = (float)(pow((double)e, (double)m_inputs[x]) / (pow((double)(1 + pow((double)e, ((double)m_inputs[x]))), 2)));

        m_weights[x] = m_weights[x] + learningRate * blame * derivative * m_output;
    }

    m_weights[m_numWeights] = m_weights[m_numWeights] + learningRate * blame;
}

NeuralNetwork::NeuralNetwork(string fileName)
    : m_fileName(fileName)
{
    char version;
    float value;
    int x, y;

    fstream saveFile(fileName.c_str(), fstream::in);

    saveFile.read((char *)&version, 1);

    if(version == 1)
    {
        //The hidden and output offsets aren't needed here,
        //so they can be skipped over.
        //Only the first byte has been read, so the next eight can be skipped.
        saveFile.seekg(9);
        saveFile.read((char *)&m_numInputs, 4);
        saveFile.read((char *)&m_numHiddenNeurons, 4);
        saveFile.read((char *)&m_numOutputNeurons, 4);

        //Instantiate the hidden neurons for the system.
        m_hiddenLayer = new Neuron[m_numHiddenNeurons];

        for(x = 0; x < m_numHiddenNeurons; ++x)
        {
            //The neuron will allocate space for eack input, plus an extra slot for the bias.
            m_hiddenLayer[x].init(m_numInputs);

            //The bias is the last index.
            for(y = 0; y <= m_numInputs; ++ y)
            {
                //Read the value from the file.
                //Copy it to its corresponding neuron.
                saveFile.read((char *)&value, 4);
                m_hiddenLayer[x].setWeight(y, value);
            }
        }

        m_OutputLayer = new Neuron[m_numOutputNeurons];

        for(x = 0; x < m_numOutputNeurons; ++x)
        {
            //The neuron will allocate space for eack input, plus an extra slot for the bias.
            m_OutputLayer[x].init(m_numHiddenNeurons);

            //The bias is the last index.
            for(y = 0; y <= m_numHiddenNeurons; ++ y)
            {
                //Read the value from the file.
                //Copy it to its corresponding neuron.
                saveFile.read((char *)&value, 4);
                m_OutputLayer[x].setWeight(y, value);
            }
        }

        saveFile.close();
    }
}

NeuralNetwork::NeuralNetwork(string fileName, const int &numInputs, const int &numHiddenNeurons, const int &numOutputNeurons, const float &learningRate)
    : m_fileName(fileName), m_numInputs(numInputs), m_numHiddenNeurons(numHiddenNeurons), m_numOutputNeurons(numOutputNeurons), m_learningRate(learningRate), m_learning(true)
{
    char fileVersion = NEURAL_NET_VERSION; //Profiles are versioned.  This is the current version number.
    int x, y;
    float value;
    //These variables will be placed in the file to speed up the seeking process later on.
    //The formula used accounts for all data stored in the file before the values of the weights in the hidden neurons.
    int hiddenOffset = sizeof(int) * 5 + sizeof(float) + sizeof(char);
    //For version 1, all neurons in one layer connect to all those in the next.  So, the number of weights for hidden neurons
    //is equivalent to the number of inputs * the number of hidden neurons.
    int outputOffset = sizeof(int) * 5 + sizeof(float) + sizeof(char) + sizeof(float) * (numInputs * numHiddenNeurons);

    srand((unsigned int)time(NULL));

    //Open an output stream to the file handle.  Delete the contents on opening, if there are any.
    fstream saveFile(fileName.c_str(), fstream::out | fstream::trunc);
    //Write the file version.
    saveFile.write((char *)&fileVersion, 1);
    saveFile.write((char *)&hiddenOffset, 4);
    saveFile.write((char *)&outputOffset, 4);
    saveFile.write((char *)&numInputs, 4);
    saveFile.write((char *)&numHiddenNeurons, 4);
    saveFile.write((char *)&numOutputNeurons, 4);
    saveFile.write((char *)&learningRate, 4);


    //Instantiate the hidden neurons for the system.
    m_hiddenLayer = new Neuron[numHiddenNeurons];

    for(x = 0; x < numHiddenNeurons; ++x)
    {
        //The neuron will allocate space for eack input, plus an extra slot for the bias.
        m_hiddenLayer[x].init(numInputs);

        //The bias is the last index.  The bias is added to the total number of inputs. (numInputs + 1)
        for(y = 0; y <= numInputs; ++ y)
        {
            //This will generate a floating point value between 0 and 1.
            //-0.5 and 0.5
            value = ((float)rand() / (float)RAND_MAX) - 0.5f;
            m_hiddenLayer[x].setWeight(y, value);

            //Write the values to the profile.
            saveFile.write((char *)&value, 4);
        }
    }

    //Instantiate the output neurons for the system.
    m_OutputLayer = new Neuron[numOutputNeurons];

    for(x = 0; x < numOutputNeurons; ++x)
    {
        //The neuron will allocate space for each input, plus an extra slot for the bias.
        m_OutputLayer[x].init(numHiddenNeurons);

        //The bias is the last index.  The bias is added to the total number of inputs. (numInputs + 1)
        for(y = 0; y <= numHiddenNeurons; ++ y)
        {
            //This will generate a floating point value between 0 and 1.
            //-0.5 and 0.5
            value = ((float)rand() / (float)RAND_MAX) - 0.5f;
            m_OutputLayer[x].setWeight(y, value);

            //Write the values to the profile.
            saveFile.write((char *)&value, 4);
        }
    }

    saveFile.close();
}

NeuralNetwork::~NeuralNetwork()
{
    delete [] m_hiddenLayer;
    delete [] m_OutputLayer;
}

void NeuralNetwork::saveNNP()
{
    fstream saveFile(m_fileName.c_str(), fstream::in | fstream::out);

    char version;
    int hiddenOffset;
    int x, y;
    float value;
    //TODO: add check to make sure file exists.
    saveFile.read((char *)&version, 1);

    if(version == 1)
    {
        saveFile.read((char *)&hiddenOffset, 4);
        //Jump to beginning of data storage.
        //Save learning rate.  It may have changed.
        //The learning rate and data are the only things that should change.
        //The number of inputs, neurons, and the addresses for data should
        //remain the same for the lifetime of the neural net.
        saveFile.seekg(hiddenOffset - 4);
        saveFile.write((char *)&m_learningRate, 4);
        for(x = 0; x < m_numHiddenNeurons; ++x)
        {
            //The bias is added to the total number of inputs. (numInputs + 1)
            for(y = 0; y <= m_numInputs; ++y)
            {
                value = m_hiddenLayer[x].getWeight(y);
                saveFile.write((char *)&value, 4);
            }
        }

        for(x = 0; x < m_numOutputNeurons; ++x)
        {
            //The bias is added to the total number of inputs. (numInputs + 1)
            for(y = 0; y <= m_numHiddenNeurons; ++y)
            {
                value = m_OutputLayer[x].getWeight(y);
                saveFile.write((char *)&value, 4);
            }
        }
    }
    saveFile.close();
}

//I may be able to reduce this to a single loop,
//but I'm not sure it would be more efficient.  I'll test it later.
float *NeuralNetwork::findResult(const float *inputs)
{
    int x, y;

    //Create an array to hold the results of each layer's calculations.
    //These will be used as inputs to the output layer and as the return
    //value for the function.
    float *outputs;

    //Copy the inputs to the hidden layer.
    for(x = 0; x < m_numInputs; ++x)
    {
        for(y = 0; y < m_numHiddenNeurons; ++y)
        {
            m_hiddenLayer[y].setInput(x, inputs[x]);
        }
    }

    outputs = new float[m_numHiddenNeurons];

    //Calculate the intermediate outputs and copy them to the local array.
    for(x = 0; x < m_numHiddenNeurons; ++x)
    {
        outputs[x] = m_hiddenLayer[x].activationFunction();
    }

    //Copy the results to the output layer's inputs.
    for(x = 0; x < m_numHiddenNeurons; ++x)
    {
        for(y = 0; y < m_numOutputNeurons; ++y)
        {
            m_OutputLayer[y].setInput(x, outputs[x]);
        }
    }

    //Reset the array so it can be used to store the next set of outputs.
    delete [] outputs;
    outputs = new float[m_numOutputNeurons];

    //Calculate the final outputs of the system.
    for(x = 0; x < m_numOutputNeurons; ++x)
    {
        outputs[x] = m_OutputLayer[x].activationFunction();
    }

    return outputs;
}

void NeuralNetwork::backpropagate(const float *expectedOutput, const float *actualOutput)
{
    int x, y, z = 0;

    //Since there is only one hidden layer, it is not necessary to keep
    //track of the blames for it.  They will be calculated one by one and
    //used immediately.
    float *blames = new float[m_numOutputNeurons];
    //Blame will store hidden neuron values.
    float blame;
    //Calculate blames of output neurons.
    for(x = 0; x < m_numOutputNeurons; ++x)
    {
        blames[z] = expectedOutput[x] - actualOutput[x];
        m_OutputLayer[x].changeWeights(m_learningRate, blames[z]);
        ++z;
    }

    //Set each blame initally to zero.
    //For each output neuron, get the weight corresponding to
    //the current hidden neuron.  Multiply the output neuron's blame
    //by the weight of the corresponding hidden neuron and add it to
    //the hidden neuron's blame.
    for(x = 0; x < m_numHiddenNeurons; ++x)
    {
        blame = 0;
        for(y = 0; y < m_numOutputNeurons; ++y)
        {
            blame += blames[y] * m_OutputLayer[y].getWeight(x);
        }
        m_hiddenLayer[x].changeWeights(m_learningRate, blame);
    }

    delete [] blames;
}

