#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--)
    {
        long long n, s, m;
        cin >> n >> s >> m;

        long long prev_ri = 0;
        bool canShower = false;

        long long li, ri;
        cin >> li >> ri;

        if (li >= s)
        {
            canShower = true;
        }

        prev_ri = ri;

        for (long long i = 1; i < n; i++)
        {
            cin >> li >> ri;

            if (li - prev_ri >= s)
            {
                canShower = true;
            }
            prev_ri = ri;
        }

        if (m - prev_ri >= s)
        {
            canShower = true;
        }

        if (canShower)
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
