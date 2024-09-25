#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        // Total number of bridges in a complete graph is n * (n - 1) / 2
        int total_bridges = n * (n - 1) / 2;

        // If k == 0, all bridges are intact, all islands are reachable
        if (k == 0)
        {
            cout << n << '\n';
            continue;
        }

        // If k >= total_bridges, all bridges can be destroyed, only island 1 is reachable
        if (k >= total_bridges)
        {
            cout << 1 << '\n';
            continue;
        }

        // Otherwise, determine how many islands remain connected
        // The maximum number of islands that can be disconnected with `k` bridges is floor(sqrt(2 * k)).
        // Reason: If you destroy `i` bridges, you can disconnect `i + 1` islands.

        int islands_left = 1; // Start with only 1 island reachable (island 1)
        int i = 1;

        while (k >= i && islands_left < n)
        {
            k -= i;
            islands_left++;
            i++;
        }

        cout << n - islands_left + 1 << '\n';
    }

    return 0;
}
