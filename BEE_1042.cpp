#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[3], B[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < 3; i++)
    {
        B[i] = A[i];
    }
    for (int i = 1; i < 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (A[j] > A[i])
            {
                int temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << A[i] << endl;
    }
    cout<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout << B[i] << endl;
    }
    return 0;
}