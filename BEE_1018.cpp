#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, C, sum = 0, B[] = {100, 50, 20, 10, 5, 2, 1}, nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0, nota1 = 0;
    cin >> A;
    C = A;
    for (int i = 0; i < 7; i++)
    {
        while ((sum <= A) && (C >= B[i]))
        {
            C = C - B[i];
            sum += B[i];
            if (100 == B[i])
            {
                nota100++;
            }
            else if (50 == B[i])
            {
                nota50++;
            }
            else if (20 == B[i])
            {
                nota20++;
            }
            else if (10 == B[i])
            {
                nota10++;
            }
            else if (5 == B[i])
            {
                nota5++;
            }
            else if (2 == B[i])
            {
                nota2++;
            }
            else
            {
                nota1++;
            }
        }
    }

    cout << sum << endl;
    cout << nota100 << " nota(s) de R$ 100,00" << endl;
    cout << nota50 << " nota(s) de R$ 50,00" << endl;
    cout << nota20 << " nota(s) de R$ 20,00" << endl;
    cout << nota10 << " nota(s) de R$ 10,00" << endl;
    cout << nota5 << " nota(s) de R$ 5,00" << endl;
    cout << nota2 << " nota(s) de R$ 2,00" << endl;
    cout << nota1 << " nota(s) de R$ 1,00" << endl;
    return 0;
}