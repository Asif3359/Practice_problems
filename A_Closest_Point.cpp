#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> points(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> points[i];
        }

        if (points.size() == 2 && points[1] != points[0] + 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}
