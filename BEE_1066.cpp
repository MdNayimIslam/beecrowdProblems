#include <bits/stdc++.h>

using namespace std;

int main()
{

    int A[5], E = 0, O = 0, P = 0, N = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (A[i] % 2 == 0)
        {
            E++;
        }
        else
        {
            O++;
        }
        if (A[i] > 0)
        {
            P++;
        }
        if (A[i] < 0)
        {
            N++;
        }
    }

    cout << E << " valor(es) par(es)" << endl;
    cout << O << " valor(es) impar(es)" << endl;
    cout << P << " valor(es) positivo(s)" << endl;
    cout << N << " valor(es) negativo(s)" << endl;

    return 0;
}