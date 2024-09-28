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
        int x, y;
        cin >> x >> y;

        int count = 0;

        if (n == 0)
        {
            count = 0; 
        }
        else
        {
            if (x >= y)
            {
                count = ceil((double)n / y);
            }
            else
            {
                count = ceil((double)n / x);
            }
        }

        cout << count << endl;
    }

    return 0;
}
