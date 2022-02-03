#include <iostream>

using namespace std;

int main()
{

    int X;
    while (cin >> X)
    {
        int n = X, sum = 0;
        if (X == 0)
        {
            return 0;
        }
        for (int i = 0; i < 5; i++, X += 2)
        {
            if (X % 2 == 0)
            {
                sum += X;
            }
            else
            {
                X += 1;
                sum += X;
            }
        }
        cout << sum << endl;
    }
    return 0;
}