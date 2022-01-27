#include <bits/stdc++.h>

using namespace std;

int main()
{
    float A;
    cin >> A;
    if (A >= 0 && A <= 400.00)
    {
        cout << fixed << setprecision(2) << "Novo salario: " << (A + (.15 * A)) << endl;
        cout << fixed << setprecision(2) << "Reajuste ganho: " << (.15 * A) << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else if (A >= 400.01 && A <= 800.00)
    {
        cout << fixed << setprecision(2) << "Novo salario: " << (A + (.12 * A)) << endl;
        cout << fixed << setprecision(2) << "Reajuste ganho: " << (.12 * A) << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if (A >= 800.01 && A <= 1200.00)
    {
        cout << fixed << setprecision(2) << "Novo salario: " << (A + (.10 * A)) << endl;
        cout << fixed << setprecision(2) << "Reajuste ganho: " << (.10 * A) << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if (A >= 1200.01 && A <= 2000.00)
    {
        cout << fixed << setprecision(2) << "Novo salario: " << (A + (.07 * A)) << endl;
        cout << fixed << setprecision(2) << "Reajuste ganho: " << (.07 * A) << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else
    {
        cout << fixed << setprecision(2) << "Novo salario: " << (A + (.04 * A)) << endl;
        cout << fixed << setprecision(2) << "Reajuste ganho: " << (.04 * A) << endl;
        cout << "Em percentual: 4 %" << endl;
    }
    return 0;
}