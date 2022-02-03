#include <iostream>

using namespace std;

int main()
{

    int N, X, Y;
    cin >> N;
    for (int j = 0; j < N; j++)
    {
        int X, Y, sum = 0;
        cin >> X >> Y;
        for (int i = 0; i < Y; i++)
        {
            if (X % 2 == 0)
            {
                X += 1;
                sum += X;
                X += 2;
            }
            else
            {
                sum += X;
                X += 2;
            }
        }
        cout << sum << endl;
    }
    return 0;
}