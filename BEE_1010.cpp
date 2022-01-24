#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Code1, Unit1, Code2, Unit2;
    double Price1, Price2;
    cin >> Code1 >> Unit1 >> Price1 >> Code2 >> Unit2 >> Price2;

    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << ((Unit1 * Price1) + (Unit2 * Price2)) << endl;
    return 0;
}