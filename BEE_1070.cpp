#include <iostream>

using namespace std;

int main()
{

    int A, i = 0, C = 0;
    cin >> A;
    i = A;
    while (C < 6)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
            C++;
        }
        i++;
    }

    return 0;
}