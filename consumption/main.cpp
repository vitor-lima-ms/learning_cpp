#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int total_dist;
    float spent_fuel;
    float avg_consumption;

    cin >> total_dist >> spent_fuel;

    avg_consumption = total_dist / spent_fuel;

    cout << fixed << setprecision(3) << avg_consumption << " km/l" << "\n";

    return 0;
    }
