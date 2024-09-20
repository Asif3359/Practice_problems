#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string st;
    cin >> st;

    int a = 0;
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == 'A')
        {
            a++; /* code */
        }
        if (st[i] == 'D')
        {
            d++; /* code */
        }
    }

    if (a > d)
    {
        cout << "Anton\n";
    }
    else if (a < d)
    {
        cout << "Danik\n";
    }
    else
    {
        cout << "Friendship\n";
    }

    return 0;
}