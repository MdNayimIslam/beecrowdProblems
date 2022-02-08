#include <bits/stdc++.h>

using namespace std;

int main()
{

    int X, Y, N, cnt = 0, Inter = 0, Gremio = 0, Empaters = 0;

    while (cin >> X >> Y)
    {
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> N;
        if (X > Y)
        {
            Inter++;
        }
        else if (X == Y)
        {
            Empaters++;
        }
        else
        {
            Gremio++;
        }
        cnt++;
        if (N == 2)
        {
            goto l;
        }
    }
l:
    cout << cnt << " grenais" << endl;
    cout << "Inter:" << Inter << endl;
    cout << "Gremio:" << Gremio << endl;
    cout << "Empates:" << Empaters << endl;
    cout << "Inter venceu mais" << endl;

    return 0;
}