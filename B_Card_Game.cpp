#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int suneetWins = 0;

        // Combination 1: (a1 vs b1, a2 vs b2)
        int sWins = 0, slWins = 0;
        if (a1 > b1)
            sWins++;
        else if (a1 < b1)
            slWins++;

        if (a2 > b2)
            sWins++;
        else if (a2 < b2)
            slWins++;

        if (sWins > slWins)
            suneetWins++;

        // Combination 2: (a1 vs b2, a2 vs b1)
        sWins = 0, slWins = 0;
        if (a1 > b2)
            sWins++;
        else if (a1 < b2)
            slWins++;

        if (a2 > b1)
            sWins++;
        else if (a2 < b1)
            slWins++;

        if (sWins > slWins)
            suneetWins++;

        cout << suneetWins*2 << endl;
    }

    return 0;
}
