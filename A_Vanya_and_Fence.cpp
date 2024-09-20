#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    float h;
    cin >> n;
    cin >> h;

    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= h)
        {
            ans++;
        }
        else
        {
            ans = ans + ceil(arr[i] / h);
        }
    }
    cout << ans << endl;

    return 0;
}