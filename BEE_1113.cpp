#include <iostream>

using namespace std;

int main()
{

    int X, Y;
    while (cin >> X >> Y)
    {
        if (X > Y)
        {
            cout << "Decrescente" << endl;
        }
        else if (Y > X)
        {
            cout << "Crescente" << endl;
        }
        else
        {
            return 0;
        }
    }

    return 0;
}