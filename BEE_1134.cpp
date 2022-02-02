#include <iostream>

using namespace std;

int main()
{

    int N, A = 0, G = 0, D = 0;
    while (cin >> N)
    {
        if (N == 1)
        {
            A++;
        }
        else if (N == 2)
        {
            G++;
        }
        else if (N == 3)
        {
            D++;
        }

        else if (N == 4)
        {
            cout << "MUITO OBRIGADO" << endl;
            cout << "Alcool: " << A << endl;
            cout << "Gasolina: " << G << endl;
            cout << "Diesel: " << D << endl;
            return 0;
        }
    }
    return 0;
}