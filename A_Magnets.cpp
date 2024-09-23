#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    stack<string> st;
    int count = 0;
    while (n--)
    {
        string a;
        cin >> a;
        if (!st.empty())
        {
            if (st.top() != a)
            {
                count++;
            }
        }
        st.push(a);
    }

    cout << count+1 << endl;

    return 0;
}