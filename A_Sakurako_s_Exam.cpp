#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int S = a +2 * b;

        if (S % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int target = S / 2;
            if (target <= 2 * b && target >= 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
