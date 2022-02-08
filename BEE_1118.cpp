#include <bits/stdc++.h>

using namespace std;

int main()
{
    double X, Y;
jump1:
    cin >> X;
    if (X < 0 || X > 10)
    {
        cout << "nota invalida" << endl;
        goto jump1;
    }
    else
    {
    jump2:
        cin >> Y;
        if (Y < 0 || Y > 10)
        {
            cout << "nota invalida" << endl;
            goto jump2;
        }
        else
        {
            cout << fixed << setprecision(2) << "media = " << (X + Y) / 2 << endl;
        }
    }

jump3:
    cout << "novo calculo (1-sim 2-nao)" << endl;
    int N;
    cin >> N;
    if (N == 1)
    {
        goto jump1;
    }
    else if (N == 2)
    {
        return 0;
    }
    else
    {
        goto jump3;
    }
    return 0;
}
