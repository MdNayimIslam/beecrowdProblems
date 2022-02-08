#include <bits/stdc++.h>

using namespace std;

int main()
{

    int X, S = 0, cnt = 0;
    cin >> X;
    while (X >= 0)
    {
        S += X;
        cnt++;
        cin >> X;
    }
    cout << fixed << setprecision(2) << float(S) / float(cnt) << endl;
    return 0;
}