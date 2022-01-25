#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, H = 0, M = 0, S = 0;
    cin >> A;
    H = A / 3600;
    A = A - (H * 3600);
    M = A / 60;
    A = A - (M * 60);
    S = A;
    cout << H << ":" << M << ":" << S << endl;
    return 0;
}