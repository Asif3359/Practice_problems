#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;

        long long int a[n + 1];
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long int sum = 0;
        for (long long int i = 0; i < n - 2; i++)
        {
            sum += a[i];
        }

        long long int result = sum + a[n - 1] - a[n - 2];

        cout << result << endl;
    }

    return 0;
}
