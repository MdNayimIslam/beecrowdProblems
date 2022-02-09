#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
        {
            return 0;
        }
        int l[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (i + k == j || i == j + k)
                    {
                        l[i][j] = k + 1;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                    printf("%3d", l[i][j]);
                else
                    printf(" %3d", l[i][j]);
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}