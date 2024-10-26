#include <iostream>

using namespace std;

int main()
{
    int t; 
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int x = 0;                
        bool sakurakoTurn = true; 
        int move = 1;             

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
