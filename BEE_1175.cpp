#include <iostream>

using namespace std;

int main()
{

    int N[20], A[20], i, j;
    for (i = 0; i < 20; i++)
    {
        cin >> N[i];
    }
    for (i = 0, j = 19; i < 20; i++, j--)
    {
        A[i] = N[j];
    }
    for (i = 0; i < 20; i++)
    {
        cout << "N[" << i << "] = " << A[i] << endl;
    }
    return 0;
}