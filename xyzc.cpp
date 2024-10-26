#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[500][500];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];

    int magic_operations = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (a[i][j] < 0)
            {
                int required_operations = -a[i][j];
                magic_operations += required_operations;

                for (int k = 0; k < n; ++k)
                {
                    if (i + k < n && j + k < n)
                    {
                        a[i + k][j + k] += required_operations;
                    }
                }
            }
        }
    }

    cout << magic_operations << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
