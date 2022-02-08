#include <iostream>

using namespace std;

int main()
{

    int X, Z, C=0, cnt = 0;
    cin >> X >> Z;
    while (Z <= X)
    {
        cin >> Z;
    }
    while (C < Z)
    {
        C = C + X;
        X++;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}