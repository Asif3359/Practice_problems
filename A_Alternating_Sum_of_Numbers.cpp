#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        int ans1 = 0;
        int ans2 = 0;

        for (int i = 0; i < N ; i = i + 2)
        {
            ans1 = ans1 + arr[i];
        }

        for (int i = 1; i < N; i = i + 2)
        {
            ans2 = ans2 + arr[i];
        }

        cout << ans1 - ans2 << endl;
    }

    return 0;
}