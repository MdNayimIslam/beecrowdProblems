#include <bits/stdc++.h>
using namespace std;

int main()
{
    double A;
    cin >> A;
    int B = (A - int(A)) * 100;
    cout << "NOTAS:" << endl;
    cout << int(A) / 100 << " nota(s) de R$ 100.00" << endl;
    A = int(A) % 100;
    cout << int(A) / 50 << " nota(s) de R$ 50.00" << endl;
    A = int(A) % 50;
    cout << int(A) / 20 << " nota(s) de R$ 20.00" << endl;
    A = int(A) % 20;
    cout << int(A) / 10 << " nota(s) de R$ 10.00" << endl;
    A = int(A) % 10;
    cout << int(A) / 5 << " nota(s) de R$ 5.00" << endl;
    A = int(A) % 5;
    cout << int(A) / 2 << " nota(s) de R$ 2.00" << endl;
    A = int(A) % 2;
    cout << "MOEDAS:" << endl;
    cout << int(A) / 1 << " moeda(s) de R$ 1.00" << endl;
    A = int(A) % 1;
    cout << B / 50 << " moeda(s) de R$ 0.50" << endl;
    B = B % 50;
    cout << B / 25 << " moeda(s) de R$ 0.25" << endl;
    B = B % 25;
    cout << B / 10 << " moeda(s) de R$ 0.10" << endl;
    B = B % 10;
    cout << B / 5 << " moeda(s) de R$ 0.05" << endl;
    B = B % 5;
    cout << B / 1 << " moeda(s) de R$ 0.01" << endl;
    B = B % 1;
    return 0;
}