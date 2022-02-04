#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N;
    cin >> N;
    int X[N];
    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
    }
    int s = INT_MAX, p = 0;
    for (int i = 0; i < N; i++)
    {
        if (s > X[i])
        {
            s = X[i];
            p = i;
        }
    }
    cout << "Menor valor: " << s << endl;
    cout << "Posicao: " << p << endl;
    return 0;
}