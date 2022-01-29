#include <bits/stdc++.h>

using namespace std;

int main()
{

    double A[6], C=0;
    for (int i = 0; i < 6; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < 6; i++)
    {
        if (A[i] >= 0)
        {
            C++;
        }
    }
    cout << C << " valores positivos" << endl;

    return 0;
}