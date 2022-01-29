#include <iostream>

using namespace std;

int main()
{

    int X, Y, sum = 0;
    cin >> X >> Y;
    for (int i = (min(X, Y) + 1); i < max(X, Y); i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}