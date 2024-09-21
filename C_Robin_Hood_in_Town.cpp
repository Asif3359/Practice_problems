#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long total_wealth = 0;
        for (int i = 0; i < n; i++)
        {
            total_wealth += a[i];
        }

        double avg_wealth = (double)total_wealth / n;
        double half_avg_wealth = avg_wealth / 2;

        int unhappy_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < half_avg_wealth)
            {
                unhappy_count++;
            }
        }

        if (unhappy_count > n / 2)
        {
            cout << -1 << endl;
        }
        else
        {
            int x = 0;
            while (true)
            {
                double new_avg_wealth = (total_wealth + x) / (double)n;
                double new_half_avg_wealth = new_avg_wealth / 2;

                int new_unhappy_count = 0;
                for (int i = 0; i < n; i++)
                {
                    if (a[i] < new_half_avg_wealth)
                    {
                        new_unhappy_count++;
                    }
                }

                if (new_unhappy_count <= n / 2)
                {
                    cout << x << endl;
                    break;
                }

                x++;
            }
        }
    }

    return 0;
}