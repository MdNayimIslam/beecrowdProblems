#include <bits/stdc++.h>
using namespace std;

int main()
{
    double A, C, B[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, .10, 0.05, 0.01};
    int nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0, moeda1 = 0, moeda50 = 0, moeda25 = 0, moeda10 = 0, moeda05 = 0, moeda01 = 0;
    cin >> A;
    C = A;
    for (int i = 0; i < 12; i++)
    {
        while (C >= B[i])
        {

            C = C - B[i];
            if (100.00 == B[i])
            {
                nota100++;
            }
            else if (50.00 == B[i])
            {
                nota50++;
            }
            else if (20.00 == B[i])
            {
                nota20++;
            }
            else if (10.00 == B[i])
            {
                nota10++;
            }
            else if (5.00 == B[i])
            {
                nota5++;
            }
            else if (2.00 == B[i])
            {
                nota2++;
            }
            else if (1.00 == B[i])
            {
                moeda1++;
            }
            else if (0.50 == B[i])
            {
                moeda50++;
            }
            else if (0.25 == B[i])
            {
                moeda25++;
            }
            else if (.10 == B[i])
            {
                moeda10++;
            }
            else if (0.05 == B[i])
            {
                moeda05++;
            }
            else
            {
                moeda01++;
            }
        }
    }

    cout << "NOTAS:" << endl;
    cout << nota100 << " nota(s) de R$ 100.00" << endl;
    cout << nota50 << " nota(s) de R$ 50.00" << endl;
    cout << nota20 << " nota(s) de R$ 20.00" << endl;
    cout << nota10 << " nota(s) de R$ 10.00" << endl;
    cout << nota5 << " nota(s) de R$ 5.00" << endl;
    cout << nota2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << moeda1 << " moeda(s) de R$ 1.00" << endl;
    cout << moeda50 << " moeda(s) de R$ 0.50" << endl;
    cout << moeda25 << " moeda(s) de R$ 0.25" << endl;
    cout << moeda10 << " moeda(s) de R$ 0.10" << endl;
    cout << moeda05 << " moeda(s) de R$ 0.05" << endl;
    cout << moeda01 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}