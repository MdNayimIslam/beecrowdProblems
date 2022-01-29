#include <iostream>

using namespace std;

int main()
{

    int A, B, H;
    cin >> A >> B;
    H = (24 - A) + B;
    if (H > 24)
    {
        H = H - 24;
    }
    cout << "O JOGO DUROU " << H << " HORA(S)" << endl;

    return 0;
}