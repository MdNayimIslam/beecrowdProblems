#include <iostream>

using namespace std;

int main()
{

    string Str;
    int DS, HS, MS, SS, DE, HE, ME, SE;
    cin >> Str >> DS;
    cin >> HS >> Str >> MS >> Str >> SS;
    cin >> Str >> DE;
    cin >> HE >> Str >> ME >> Str >> SE;

    int D = DE - DS;
    int H = ((D * 24) + HE) - HS;
    int M = ((H * 60) + ME) - MS;
    int S = ((M * 60) + SE) - SS;

    int Day = S / 86400;
    int Hour = (S % 86400) / 3600;
    int Minute = ((S % 86400) % 3600) / 60;
    int Second = (((S % 86400) % 3600) % 60);

    cout << Day << " dia(s)" << endl;
    cout << Hour << " hora(s)" << endl;
    cout << Minute << " minuto(s)" << endl;
    cout << Second << " segundo(s)" << endl;

    return 0;
}