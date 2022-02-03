#include <bits/stdc++.h>

using namespace std;

int main()
{

    double S = 1, j = 1;
    for (double i = 3; i <= 39; i += 2)
    {
        S += i / (2 * j);
       // cout << i << "/" << (2 * j) << " ";
        j *= 2;
    }
    //cout << endl;
    cout << fixed << setprecision(2) << S << endl;
    return 0;
}