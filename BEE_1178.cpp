#include <bits/stdc++.h>

using namespace std;

int main()
{

    double n;
    cin >> n;
    for (int i = 0; i < 100; i++)
    {
        cout << fixed << setprecision(4) << "N[" << i << "] = " << n << endl;
        n = n / 2.00;
    }

    return 0;
}