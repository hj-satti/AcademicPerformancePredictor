#include <fann.h>
#include <fann_cpp.h>
#include <iostream>
using namespace std;

int main() {
    const unsigned int num_input = 4;
    const unsigned int num_output = 1;
    const unsigned int num_layers = 3;
    const unsigned int num_neurons_hidden = 6;
    const float desired_error = 0.001f;
    const unsigned int max_epochs = 5000;
    const unsigned int epochs_between_reports = 1000;

    fann::neural_net net;
    net.create_standard(num_layers, num_input, num_neurons_hidden, num_output);

    net.set_learning_rate(0.7f);
    net.set_activation_function_hidden(FANN::SIGMOID_SYMMETRIC);
    net.set_activation_function_output(FANN::LINEAR);

    net.train_on_file("data/training.data", max_epochs, epochs_between_reports, desired_error);

    net.save("models/unipredict.net");

    cout << "✅ Model trained and saved to models/unipredict.net" << endl;
    return 0;
}
