#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    cout << max(A, (max(B, C))) << " eh o maior" << endl;
    return 0;
}