#include <bits/stdc++.h>

using namespace std;

int64_t f(int64_t n)
{
    int64_t f, f1 = 0, f2 = 1;
    if (n == 0 || n == 1)
    {
        return n;
    }
    for (int64_t i = 2; i <= n; i++)
    {
        f = f2 + f1;
        f1 = f2;
        f2 = f;
    }
    return f;
}
int main()
{

    int64_t n, x;
    cin >> n;
    for (int64_t i = 0; i < n; i++)
    {
        cin >> x;
        cout << "Fib(" << x << ") = " << f(x) << endl;
    }

    return 0;
}