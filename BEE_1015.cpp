#include <bits/stdc++.h>
using namespace std;
int main()
{
    double A1, B1, A2, B2;
    cin >> A1 >> B1 >> A2 >> B2;
    cout << fixed << setprecision(4) << sqrt(pow((A2 - A1), 2) + pow((B2 - B1), 2)) << endl;
    return 0;
}