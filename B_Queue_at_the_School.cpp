#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    string st;
    cin >> st;

    queue<char> q;

    while (t--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (st[i] == 'B' && st[i + 1] == 'G')
            {
                swap(st[i], st[i + 1]);
                i++;
            }
        }
    }
    cout << st << endl;

    return 0;
}