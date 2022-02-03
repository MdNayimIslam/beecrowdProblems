#include <iostream>

using namespace std;

int main()
{

    int x, f1 = 0, f2 = 1,f;
    cin >> x;
    cout << f1 << " " << f2;
    for (int i = 2; i < x; i++)
    {
        f = f2;
        f2 += f1;
        f1 = f;
        cout << " " << f2;
    }

    return 0;
}