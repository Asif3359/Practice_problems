// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long int t;
//     cin >> t;

//     while (t--)
//     {
//         long long int n, s, m;
//         cin >> n >> s >> m;

//         vector<long long int> arr(m + 1, 0);

//         while (n--)
//         {
//             long long int li, ri;
//             cin >> li >> ri;

//             arr[li] += 1;
//             if (ri < m)
//             {
//                 arr[ri] -= 1;
//             }
//         }

//         for (long long int i = 1; i < m; i++)
//         {
//             arr[i] += arr[i - 1];
//         }

//         // for (long long int i = 0; i < m; i++)
//         // {
//         //     cout << arr[i] << " ";
//         // }
//         // cout << endl;

//         long long int count = 0;
//         bool isYes = false;

//         for (long long int i = 0; i < m; i++)
//         {
//             if (arr[i] > 0)
//             {
//                 count = 0;
//             }
//             else
//             {
//                 count++;
//                 if (count == s)
//                 {
//                     isYes = true;
//                     break;
//                 }
//             }
//         }

//         if (isYes)
//         {
//             cout << "YES\n";
//         }
//         else
//         {
//             cout << "NO\n";
//         }
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--)
    {
        long long n, s, m;
        cin >> n >> s >> m;

        long long prev_ri = 0;
        bool canShower = false;

        long long li, ri;
        cin >> li >> ri;

        if (li >= s)
        {
            canShower = true;
        }

        prev_ri = ri;

        for (long long i = 1; i < n; i++)
        {
            cin >> li >> ri;

            if (li - prev_ri >= s)
            {
                canShower = true;
            }
            prev_ri = ri;
        }

        if (m - prev_ri >= s)
        {
            canShower = true;
        }

        if (canShower)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
