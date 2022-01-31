#include <bits/stdc++.h>

using namespace std;

int main()
{

    int X, Y, cnt = 0;
    while (cin >> X >> Y)
    {
        if (X <= 0 || Y <= 0)
        {
            return 0;
        }
        for (int i = min(X, Y); i <= max(X, Y); i++)
        {
            cout << i << " ";
            cnt += i;
        }
        cout << "Sum=" << cnt << endl;
        cnt = 0;
    }

    return 0;
}