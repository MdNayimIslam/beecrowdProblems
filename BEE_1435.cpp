#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            return 0;
        int m = n / 2, l[n][n], a = 0, b = n - 1;
        if (n % 2 == 1)
            m++;
        for (int i = 1; i <= m; i++)
        {
            for (int j = a; j <= b; j++)
                for (int k = a; k <= b; k++)
                    l[j][k] = i;
            a++;
            b--;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                    cout << l[i][j];
                else
                    cout << " " << l[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}