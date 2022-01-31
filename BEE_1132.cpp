#include <bits/stdc++.h>

using namespace std;

int main()
{

    int X, Y, sum = 0;
    cin >> X >> Y;
    for (int i = min(X, Y); i <= max(X, Y); i++)
    {
        if (i % 13 != 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}