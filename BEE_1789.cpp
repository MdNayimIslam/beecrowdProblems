#include <iostream>

using namespace std;

int main()
{

    int n;
    while (cin >> n)
    {
        int m = 0, x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x > m)
            {
                m = x;
            }
        }
        if (10 > m)
        {
            cout << "1" << endl;
        }
        else if (20 > m)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "3" << endl;
        }
    }

    return 0;
}