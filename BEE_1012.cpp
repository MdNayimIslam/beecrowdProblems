#include <bits/stdc++.h>
using namespace std;

int main()
{
    double A, B, C, P = 3.14159;
    cin >> A >> B >> C;

    cout << fixed << setprecision(3) << "TRIANGULO: " << (.5 * A * C) << endl;
    cout << "CIRCULO: " << (pow(C, 2) * P) << endl;
    cout << "TRAPEZIO: " << (.5 * (A + B) * C) << endl;
    cout << "QUADRADO: " << (B * B) << endl;
    cout << "RETANGULO: " << (A * B) << endl;
    return 0;
}