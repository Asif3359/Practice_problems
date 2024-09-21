#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        long long firstYear = max(1LL, n - k + 1);

        long long t1 = (n * (n + 1)) / 2;

        long long t2 = (firstYear - 1) * firstYear / 2;

        long long numLeaves = t1 - t2;

        if (numLeaves % 2 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
