#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;

    cin >> st;
    string st1 = "";

    for (int i = st.size() - 1; i >= 0; i--)
    {
        st1.push_back(st[i]);
    }
    for (int i = 0; i < st1.size(); i++)
    {
        if (st1[i] >= 'A' && st1[i] <= 'Z')
        {
            st1[i] = st1[i] + 32;
        }
    }
    cout << st1 << endl;
    return 0;
}