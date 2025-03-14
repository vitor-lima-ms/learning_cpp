#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name;
    double salary, solds, final_salary;

    cin >> name >> salary >> solds;

    final_salary = (0.15 * solds) + salary;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << final_salary << "\n";

    return 0;
    }
