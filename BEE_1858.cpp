#include <iostream>

using namespace std;

int main()
{

    int n, x, l, m;
    while (cin >> n)
    {
        l = 20;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x < l)
            {
                l = x;
                m = i + 1;
            }
        }
        cout << m << endl;
        m = 0;
    }
    return 0;
}