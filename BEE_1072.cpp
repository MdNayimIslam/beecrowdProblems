#include <iostream>

using namespace std;

int main()
{

    int N, c = 0;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (A[i] >= 10 && A[i] <= 20)
        {
            c++;
        }
    }
    cout << c << " in" << endl;
    cout << N - c << " out" << endl;
    return 0;
}