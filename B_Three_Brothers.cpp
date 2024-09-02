#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a + b == 3)
    {
        cout << 3 << endl;
    }
    else if (a + b == 5)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
    }

    return 0;
}

/*

1 + 2 = 3
2 + 3 = 5?
1 + 3 = 4?

*/