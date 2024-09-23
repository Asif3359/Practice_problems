#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a;
        cin >> a;

        int x, y;
        x = a % 10;
        y = (a / 10) % 10;

        cout << x + y << endl;
    }

    return 0;
}