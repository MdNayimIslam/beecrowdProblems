#include <iostream>

using namespace std;

int main()
{

    int n, k = 0;
    cin >> n;
    while (k < 1000)
    {
        for (int j = 0; j < n; j++)
        {
            if (k < 1000)
            {
                cout << "N[" << k << "] = " << j << endl;
                k++;
            }
        }
    }

    return 0;
}