#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    switch (A)
    {
    case 1:
        cout << fixed << setprecision(2) << "Total: R$ " << (B * 4.00) << endl;
        break;
    case 2:
        cout << fixed << setprecision(2) << "Total: R$ " << (B * 4.50) << endl;
        break;
    case 3:
        cout << fixed << setprecision(2) << "Total: R$ " << (B * 5.00) << endl;
        break;
    case 4:
        cout << fixed << setprecision(2) << "Total: R$ " << (B * 2.00) << endl;
        break;
    case 5:
        cout << fixed << setprecision(2) << "Total: R$ " << (B * 1.50) << endl;
        break;
    }
    return 0;
}