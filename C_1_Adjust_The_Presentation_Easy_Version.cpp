#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a, b, T[200005];
    cin >> t;
    while (t--)
    {
        int n, m, q, s = 1, c = 0;
        cin >> n >> m >> q;
        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            T[a] = i;
        }
        for (int i = 1; i <= m; i++)
        {
            cin >> b;
            if (T[b] <= c + 1)
            {
                s &= 1;
            }
            else
            {
                s &= 0;
            }
            c = max(c, T[b]);
        }
        if (s)
            cout << "YA" << endl;
        else
            cout << "TIDAK" << endl;
    }

    return 0;
}