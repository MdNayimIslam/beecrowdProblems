#include <bits/stdc++.h>

using namespace std;

int main()
{

    int A[5], C = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (A[i] % 2 == 0)
        {
            C++;
        }
    }

    cout << C << " valores pares" << endl;

    return 0;
}