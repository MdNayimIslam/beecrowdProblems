#include <iostream>

using namespace std;

int main()
{

    int HS, HE, MS, ME, H;
    cin >> HS >> MS >> HE >> ME;
    H = ((HE*60)+ME) - ((HS*60)+MS);
    if (H <= 0)
    {
        H += 24 * 60;
    }
    cout << "O JOGO DUROU " << H/60 << " HORA(S) E " << H%60 << " MINUTO(S)" << endl;

    return 0;
}