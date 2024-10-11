#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; 

    while (t--)
    {
        long long x, y, k;
        cin >> x >> y >> k;

        long long x_moves = ceil(x / (k * 1.0));
        long long y_moves = ceil(y / (k * 1.0));

        long long total_moves;
        if (x_moves > y_moves)
        {
            total_moves = 2 * x_moves - 1;
        }
        else
        {
            total_moves = 2 * y_moves;
        }

        cout << total_moves << endl;
    }

    return 0;
}
