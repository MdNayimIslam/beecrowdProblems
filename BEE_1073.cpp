#include <iostream>

using namespace std;

int main()
{

    int A;
    cin >> A;
    for (int i = 2; i <= A; i += 2)
    {
        cout << i << "^2" << " = " << i * i << endl;
    }

    return 0;
}