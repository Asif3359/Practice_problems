#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long int n, q;
    string s;
    cin >> n >> s >> q;

    // a b b c d a d k p
    // 0 1 2 3 4 5 6 7 8

    for (long long int i = 0; i < q; i++)
    {
        long long int l, r, k;
        cin >> l >> r >> k;
        l--;
        r--; 

        vector<long long int> freq(26, 0);
        for (long long int j = l; j <= r; j++)
        {
            freq[s[j] - 'a']++;
        }

        long long int oddCount = 0;
        for (long long int j = 0; j < 26; j++)
        {
            if (freq[j] % 2 != 0)
            {
                oddCount++;
            }
        }

        if (oddCount <= 2 * k + 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}