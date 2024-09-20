#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin >> st;
    string st2;
    cin >> st2;
    
    reverse(st.begin(), st.end());

    if (st == st2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}