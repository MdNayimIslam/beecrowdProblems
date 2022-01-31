#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, X, Y, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> X >> Y;
        for (int j = (min(X, Y)) + 1; j < max(X, Y); j++)
        {
            if (j % 2 != 0)
            {
                sum += j;
            }
        }
        cout << sum << endl;
        sum = 0;
    }

    return 0;
}