#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int a, b;
    while (cin >> a >> b)
    {
        // Bitwise addition without carry
        cout << (a ^ b) << "\n";
    }
    return 0;
}
