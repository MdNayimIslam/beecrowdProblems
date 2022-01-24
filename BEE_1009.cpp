#include <bits/stdc++.h>
using namespace std;

int main()
{
    string Name;
    double Salary, Sales, Total_Salary;
    cin >> Name >> Salary >> Sales;
    Total_Salary = (.15 * Sales) + Salary;
    cout << fixed << setprecision(2) << "TOTAL = R$ " << Total_Salary << endl;
    return 0;
}