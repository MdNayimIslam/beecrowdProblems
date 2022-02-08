#include <iostream>

using namespace std;

int main()
{

    int N, X, S = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        S = 0;
        cin >> X;
        for (int j = 1; j < X; j++)
        {
            S = S + j;
            
            if (S == X)
            {
                cout << X << " eh perfeito" << endl;
                break;
            }
        }
        if (S != X)
        {
            cout << X << " nao eh perfeito" << endl;
        }
    }

    return 0;
}