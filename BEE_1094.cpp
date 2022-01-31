#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    char arrc[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] >> arrc[i];
    }
    int sum = 0, c = 0, s = 0, r = 0;

    for (int i = 0; i < n; i++)
    {
        if (arrc[i] == 'C')
        {
            c += arr[i];
        }
        else if (arrc[i] == 'S')
        {
            s += arr[i];
        }
        else if (arrc[i] == 'R')
        {
            r += arr[i];
        }
    }
    sum = c + s + r;
    cout << "Total: " << sum << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;

    cout << fixed << setprecision(2) << "Percentual de coelhos: " << (float(c)) / (float(sum)) * 100 << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de ratos: " << (float(r)) / (float(sum)) * 100 << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de sapos: " << (float(s)) / (float(sum)) * 100 << " %" << endl;
    return 0;
}