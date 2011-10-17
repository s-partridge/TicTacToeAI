#include <QtGui/QApplication>
#include "mainwindow.h"
#include "neuralnetwork.h"
#include <fstream>
#include <iostream>

void testFFNN();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Model *m = new Model();
    Controller *c = new Controller(m);

    //testFFNN();

    w.setController(c);

    w.show();

    return a.exec();
    delete c;
    delete m;
}

void testFFNN()
{
    NeuralNetwork *neuralNetwork = new NeuralNetwork("rockpaperscissors.nnp", 1, 18, 1, 0.5f);
    //NeuralNetwork *firstAIRun = new NeuralNetwork("testnn2.nnp");
    neuralNetwork->setLearningRate(0.05f);

    fstream outputFile("outputData.txt", fstream::out | fstream::in);

    //Prints to the "Application Output" frame in the debugger.
    cout << "Is this gonna print?" << endl;
    cout << outputFile << endl;
    cout << "   X             Y\n";

    float *outputs = new float[1];
    float expectedOutputs[1];
    float inputs[1];

    for(int x = 0; x < 3000000; ++x)
    {
        if(x%3 == 2)
        {
            //Rock
            inputs[0] = 0.0f;

            //Paper
            expectedOutputs[0] = 0.5f;

            if(x%9 == 2)
                cout << "\nRock: ";
        }
        else if(x%3 == 1)
        {
            /*
              O | x | O
             ---|---|---
              O | X |
             ---|---|---
                | O | X */

            //Paper
            inputs[0] = 0.5f;

            //Top mid square.

            //Scissors
            expectedOutputs[0] = 0.7f;

            if(x%9 == 1)
                cout << "  \t  Paper: ";
        }
        else
        {
            //Scissors
            inputs[0] = 1.0f;

            //Rock
            expectedOutputs[0] = 0.3f;

            if(x%9 == 0)
                cout << "  \t  Scissors: ";
        }

        outputs = neuralNetwork->findResult(inputs);

        if(x%9 <= 2)
            cout << outputs[0];

        neuralNetwork->backpropagate(expectedOutputs, outputs);

        delete [] outputs;
    }

    outputFile << endl;
    outputFile.close();

    neuralNetwork->shouldLearn(true);

    delete neuralNetwork;
}
