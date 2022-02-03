#include <iostream>

using namespace std;

int main()
{
    int X, Y, i = 1;
    cin >> X >> Y;
    while (i <= Y)
    {
        for (int j = 1; j <= X; j++)
        {
            if(j==X)
            {
                cout << i;
            }
            else
            {
                cout<<i<<" ";
            }
            
            i++;
        }
        cout << endl;
    }

    return 0;
}