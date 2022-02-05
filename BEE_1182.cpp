#include <bits/stdc++.h>

using namespace std;

int main()
{

    double M[12][12], sum = 0.0;
    char C;
    int N;
    cin >> N >> C;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> M[i][j];
        }
    }
    for (int i = 0; i < 12; i++)
    {
        sum += M[i][N];
    }
    if (C == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if (C == 'M')
    {
        cout << fixed << setprecision(1) << sum / 12.00 << endl;
    }
    return 0;
}