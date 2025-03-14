#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C, tri_area, c_area, trap_area, q_area, ret_area;

    cin >> A >> B >> C;

    tri_area = (A * C) / 2;
    c_area = (3.14159 * pow(C, 2));
    trap_area = ((A + B) * C) / 2;
    q_area = pow(B, 2);
    ret_area = A * B;

    cout << fixed << setprecision(3) << "TRIANGULO: " << tri_area << "\n";
    cout << fixed << setprecision(3) << "CIRCULO: " << c_area << "\n";
    cout << fixed << setprecision(3) << "TRAPEZIO: " << trap_area << "\n";
    cout << fixed << setprecision(3) << "QUADRADO: " << q_area << "\n";
    cout << fixed << setprecision(3) << "RETANGULO: " << ret_area << "\n";
    }
