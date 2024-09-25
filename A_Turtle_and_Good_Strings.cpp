#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        bool good = false;

        if (s[0] != s[n - 1])
        {
            good = true;
        }

        if (good)
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
