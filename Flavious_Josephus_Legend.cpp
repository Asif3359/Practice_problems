#include <iostream>
using namespace std;

int josephus(int n, int k)
{
    int survivor = 0;
    for (int i = 2; i <= n; i++)
    {
        survivor = (survivor + k) % i;
    }
    return survivor + 1;
}

int main()
{
    int nc;
    cin >> nc;

    for (int i = 1; i <= nc; i++)
    {
        int n, k;
        cin >> n >> k;

        int result = josephus(n, k);
        cout << "Case " << i << ": " << result << endl;
    }

    return 0;
}
