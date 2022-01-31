#include <bits/stdc++.h>

using namespace std;

int main()
{

    string S1, S2 = "2002";
    while (cin >> S1)
    {
        if (S1 == S2)
        {
            cout << "Acesso Permitido" << endl;
            return 0;
        }
        else
        {
            cout << "Senha Invalida" << endl;
        }
    }

    return 0;
}