#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    double arr1[n], arr2[n], arr3[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i] >> arr2[i] >> arr3[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << fixed << setprecision(1) << ((arr1[i] * 2) + (arr2[i] * 3) + (arr3[i] * 5)) / 10 << endl;
    }

    return 0;
}