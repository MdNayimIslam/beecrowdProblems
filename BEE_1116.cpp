#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, X, Y;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> X >> Y;
        if (Y == 0)
        {
            cout << "divisao impossivel" << endl;
        }
        else
        {
            cout << fixed << setprecision(1) << float(X) / float(Y) << endl;
        }
    }
    return 0;
}