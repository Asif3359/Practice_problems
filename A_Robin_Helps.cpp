#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        int robinGold = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= k)
            {
                robinGold += arr[i];
            }
            else if (arr[i] == 0)
            {
                if (robinGold > 0)
                {
                    robinGold--;
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}