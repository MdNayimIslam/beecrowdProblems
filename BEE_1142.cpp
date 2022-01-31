#include <iostream>

using namespace std;

int main()
{

    int n, c = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j < 3)
            {
                cout << c << " ";
                c++;
            }
            else
            {
                cout << "PUM";
                c++;
            }
        }
        cout << endl;
    }

    return 0;
}