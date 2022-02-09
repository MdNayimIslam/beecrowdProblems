#include <iostream>

using namespace std;

int main()
{

    int n;
    while (cin >> n)
    {
        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j] = 3;
            }
            for (int j = 0; j < n; j++)
            {
                a[j][j] = 1;
            }
            for (int k = 0, j = n - 1; k < n; k++, j--)
            {
                a[k][j] = 2;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}