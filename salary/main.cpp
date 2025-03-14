#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int number, worked_hours;
    float salary_p_hour, total_salary;

    cin >> number >> worked_hours >> salary_p_hour;

    total_salary = worked_hours * salary_p_hour;

    cout << "NUMBER = " << number << "\n";
    cout << "SALARY = U$ " << fixed << setprecision(2) << total_salary << "\n";

    return 0;
    }
