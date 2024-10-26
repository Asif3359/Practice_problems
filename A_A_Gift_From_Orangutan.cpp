#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> l(n);
        for (int i = 0; i < n; i++)
        {
            cin >> l[i];
        }

        int max = *max_element(l.begin(), l.end());
        int mini = *min_element(l.begin(), l.end());

        cout << (max * (n - 1)) - (mini * (n - 1)) << endl;
    }

    return 0;
}
