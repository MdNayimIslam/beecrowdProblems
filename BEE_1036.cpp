#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if ((pow(b, 2) - (4 * a * c)) < 0 || a == 0)
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        cout << fixed << setprecision(5) << "R1 = " << (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a) << endl;
        cout << fixed << setprecision(5) << "R2 = " << (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a) << endl;
    }

    return 0;
}