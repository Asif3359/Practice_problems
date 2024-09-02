#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MAXN = 2000;
int dp[MAXN][MAXN];

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        memset(dp, 0, sizeof(dp));

        // Filling DP table
        for (int len = 2; len <= n; len++) {
            for (int i = 0; i + len <= n; i++) {
                int j = i + len - 1;
                if (a[i] == a[j]) {
                    dp[i][j] = dp[i + 1][j - 1];
                } else {
                    dp[i][j] = 1 + min(dp[i + 1][j], dp[i][j - 1]);
                }
            }
        }

        long long total_operations = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                total_operations += dp[i][j];
            }
        }

        cout << total_operations << endl;
    }

    return 0;
}
