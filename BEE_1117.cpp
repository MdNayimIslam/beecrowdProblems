#include <bits/stdc++.h>

using namespace std;

int main()
{

    double X, x = 0, sum = 0;
    while (cin >> X)
    {
        if (X <= 10 && X >= 0)
        {
            x++;
            sum += X;
        }
        else
        {
            cout << "nota invalida" << endl;
        }
        if (x == 2)
        {
            cout << fixed << setprecision(2) << "media = " << sum / 2 << endl;
            return 0;
        }
    }
    return 0;
}