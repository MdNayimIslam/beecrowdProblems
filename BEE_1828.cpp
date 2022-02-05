#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    string X, Y;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> X >> Y;
        if (X == Y)
        {
            cout << "Caso #" << i << ": De novo!" << endl;
        }

        else if (X == "pedra" && Y == "tesoura")
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        else if (X == "pedra" && Y == "lagarto")
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }

        else if (X == "papel" && Y == "pedra")
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        else if (X == "papel" && Y == "Spock")
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }

        else if (X == "tesoura" && Y == "lagarto")
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        else if (X == "tesoura" && Y == "papel")
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }

        else if (X == "lagarto" && Y == "Spock")
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        else if (X == "lagarto" && Y == "papel")
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }

        else if (X == "Spock" && Y == "tesoura")
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        else if (X == "Spock" && Y == "pedra")
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }

        else
        {
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }
    }

    return 0;
}