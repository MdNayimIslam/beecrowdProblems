#include <iostream>

using namespace std;

int main()
{

    float Y, X;
    cin >> Y >> X;
    if (X > 0 && Y > 0)
    {
        cout << "Q1" << endl;
    }
    else if (X > 0 && Y < 0)
    {
        cout << "Q2" << endl;
    }
    else if (X < 0 && Y < 0)
    {
        cout << "Q3" << endl;
    }
    else if (X < 0 && Y > 0)
    {
        cout << "Q4" << endl;
    }
    else if(X==0 && Y==0)
    {
        cout << "Origem" << endl;
    }
    else if(X==0)
    {
        cout << "Eixo X" << endl;
    }
    else
    {
        cout << "Eixo Y" << endl;
    }

    return 0;
}