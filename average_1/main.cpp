#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double A_weight = 3.5;
    const double B_weight = 7.5;
    double A;
    double B;

    cin >> A;
    cin >> B;

    float mean = ((A * A_weight ) + (B * B_weight )) / (A_weight + B_weight);

    cout << "MEDIA = " << fixed << setprecision(5) << mean << "\n";

    return 0;
    }

