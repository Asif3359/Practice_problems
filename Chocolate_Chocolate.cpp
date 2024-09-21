#include <iostream>
using namespace std;

int totalChocolates(int N)
{
    int chocolates = N / 5;
    int wrappers = chocolates;

    while (wrappers >= 3)
    {
        int extraChocolates = wrappers / 3;
        chocolates += extraChocolates;
        wrappers = wrappers % 3 + extraChocolates;
    }

    return chocolates;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        cout << totalChocolates(N) << endl;
    }
    return 0;
}
