#include <bits/stdc++.h>

using namespace std;

int main()
{

    int X, Y;
    cin >> X >> Y;
    for (int i = min(X, Y)+1; i < max(X, Y); i++)
    {
        if (i % 5 == 2 || i % 5 == 3)
        {
            cout << i << endl;
        }
    }

    return 0;
}