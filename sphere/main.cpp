#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double radius, volume;

    cin >> radius;

    volume = ((4/3.0) * 3.14159) * (pow(radius, 3));

    cout << "VOLUME = " << fixed << setprecision(3) << volume << "\n";

    return 0;
    }
