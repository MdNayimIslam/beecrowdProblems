#include <iostream>

using namespace std;

int main()
{
    int X;
    while (cin >> X)
    {
        if (X == 0)
        {
            return 0;
        }
        for (int i = 1; i <= X; i++)
        {
            if (X == i)
            {
                cout << i;
            }
            else
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}