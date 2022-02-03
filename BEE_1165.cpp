#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, c = 0;
        cin >> x;
        for (int j = 2; j < x; j++)
        {
            if (x % j == 0)
            {
                c = 1;
            }
        }
        if (c == 1)
        {
            cout << x << " nao eh primo" << endl;
        }
        else
        {
            cout << x << " eh primo" << endl;
        }
    }

    return 0;
}