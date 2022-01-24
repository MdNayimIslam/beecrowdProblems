#include <bits/stdc++.h>
using namespace std;

int main()
{
    double R, P = 3.14159;
    cin >> R;

    cout << fixed << setprecision(3) << "VOLUME = " << ((4.0 / 3) * P * pow(R, 3)) << endl;
    return 0;
}