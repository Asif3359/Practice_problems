#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    int arr[n + 1];
    bool visited[n + 1] = {false};

    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
    }

    int pos = 1;
    visited[pos] = true;

    while (pos < t)
    {
        pos += arr[pos];
        if (pos > n || visited[pos])
        {
            break;
        }
        visited[pos] = true;
    }

    if (pos == t)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
