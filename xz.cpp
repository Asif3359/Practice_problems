#include <iostream>

using namespace std;

int main()
{
    int t; // number of test cases
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int x = 0;                // initial position of the dot
        bool sakurakoTurn = true; // to keep track of turns
        int move = 1;             // start with the first move

        while (true)
        {
            if (sakurakoTurn)
            {
                x -= move;
                if (abs(x) > n)
                {
                    cout << "Sakurako" << endl;
                    break;
                }
            }
            else
            {
                x += move;
                if (abs(x) > n)
                {
                    cout << "Kosuke" << endl;
                    break;
                }
            }
            sakurakoTurn = !sakurakoTurn;
            move++;
        }
    }

    return 0;
}
