#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[100], m = INT_MIN, p = INT_MIN;
    for (int i = 0; i < 100; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 100; i++)
    {
        if (m < arr[i])
        {
            m = arr[i];
            p = i;
        }
    }
    cout << m << endl
         << p + 1 << endl;
    return 0;
}