#include <iostream>

using namespace std;

int main()
{

    int a[10], N;
    cin >> N;
    for (int i = 0, j = N; i < 10; i++, j *= 2)
    {
        a[i] = j;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "N[" << i << "] = " << a[i] << endl;
    }
    return 0;
}