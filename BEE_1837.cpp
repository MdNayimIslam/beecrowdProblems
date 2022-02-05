#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, f, r, e;
    cin >> a >> b;
    if (a < 0)
    {
        cout << (a / b) + (a % b) << " ";
        cout << (a / b) * (a % b) << endl;
        //     // e = b;
        //     // if (b < 0)
        //     //     e = b * -1;
        //     // for (r = 0; r < e; r++)
        //     // {
        //     //     f = a - r;
        //     //     if (f % b == 0)
        //     //         break;
        //     // }

        //     cout << a / b << " ";
        //     cout << (a%b)*-1 << endl;
    }
    else
    {
        cout << a / b << " ";
        cout << a % b << endl;
        // cout << (b * (-1 ))+(-2) << endl;
    }
    return 0;
}