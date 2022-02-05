// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     int M[12][12] = {0};

//     for (int i = 11; i >= 0; i--)
//     {
//         for (int j = 11; j >= 0; j--)
//         {
//             if (((j < i) && j > (11 - i)))
//             {
//                 M[i][j] = 1;
//            }
//         }
//     }

//     for (int i = 0; i <12; i++)
//     {
//         for (int j = 0; j < 12; j++)
//         {

//             cout << M[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



#include <bits/stdc++.h>

using namespace std;

int main()
{

    double M[12][12], sum = 0.0;
    char C;
    cin >> C;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> M[i][j];
        }
    }
    for (int i = 11; i >=0; i--)
    {
        for (int j = 11; j >=0; j--)
        {
            if (((j < i) && j > (11-i)))
            {
                sum += M[i][j];
            }
        }
    }
    if (C == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if (C == 'M')
    {
        cout << fixed << setprecision(1) << sum / 30.00 << endl;
    }
    return 0;
}