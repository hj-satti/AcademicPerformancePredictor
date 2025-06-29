#include <fann.h>
#include <fann_cpp.h>
#include <iostream>
using namespace std;

int main() {
    fann::neural_net net;
    net.create_from_file("models/unipredict.net");

    float input[4];
    cout << "📥 Enter student's scores (0–100):\n";
    cout << "Assignments: "; cin >> input[0];
    cout << "Quizzes: "; cin >> input[1];
    cout << "Midterms: "; cin >> input[2];
    cout << "Finals: "; cin >> input[3];

    float* output = net.run(input);
    cout << "\n📊 Predicted Final Grade: " << output[0] << "%" << endl;

    if (output[0] >= 85)
        cout << "🌟 Excellent! On track for an A." << endl;
    else if (output[0] >= 70)
        cout << "✅ Good! Keep going." << endl;
    else if (output[0] >= 50)
        cout << "⚠️ Passing, but improve." << endl;
    else
        cout << "❌ At risk of failing. Act now." << endl;

    return 0;
}
