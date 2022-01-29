#include <bits/stdc++.h>
using namespace std;

int main()
{

    double A;
    cin >> A;
    if (A <= 2000)
    {
        cout << "Isento" << endl;
    }
    else if (A > 2000 && A <= 3000)
    {
        cout << fixed << setprecision(2) << "R$ " << (A - 2000) * 00.08 << endl;
    }
    else if (A > 3000 && A <= 4500)
    {
        cout << fixed << setprecision(2) << "R$ " << (((A - 3000) * 00.18) + (1000 * .08)) << endl;
    }
    else
    {
        cout << fixed << setprecision(2) << "R$ " << (((A - 4500) * 00.28) + (1500 * 00.18) + (1000 * .08)) << endl;
    }

    return 0;
}