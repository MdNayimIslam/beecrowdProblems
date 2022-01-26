#include <bits/stdc++.h>

using namespace std;

int main()
{
    double A, B, C, D, F, sum;
    cin >> A >> B >> C >> D;
    sum = ((A * 2) + (B * 3) + (C * 4) + (D * 1)) / 10;
    cout << fixed << setprecision(1) << "Media: " << sum << endl;
    if (sum >= 7.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (sum >= 5.0)
    {
        cout << "Aluno em exame." << endl;
        cin >> F;
        cout << fixed << setprecision(1) << "Nota do exame: " << F << endl;
        if (((F + sum) / 2) > 5.0)
        {
            cout << "Aluno aprovado." << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
        }
        cout << fixed << setprecision(1) << "Media final: " << ((F + sum) / 2) << endl;
    }
    else
    {
        cout << "Aluno reprovado." << endl;
    }

    return 0;
}