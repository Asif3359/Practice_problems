#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin >> st;

    set<char> se;

    for (int i = 0; i < st.size(); i++)
    {
        se.insert(st[i]);
    }

    if (se.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!\n";
    }
    else
    {
        cout << "IGNORE HIM!\n";
    }

    return 0;
}