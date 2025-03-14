#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float A;
    float B;
    float C;
    float mean;

    int A_WEIGHT = 2;
    int B_WEIGHT = 3;
    int C_WEIGHT = 5;

    cin >> A;
    cin >> B;
    cin >> C;

    mean = ((A * A_WEIGHT) + (B * B_WEIGHT) + (C * C_WEIGHT)) / (A_WEIGHT + B_WEIGHT + C_WEIGHT);

    cout << "MEDIA = " << fixed << setprecision(1) << mean << "\n";

    return 0;
    }
