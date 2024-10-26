#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1;
    string str2;
    cin >> str1 >> str2;

    string ans = "";

    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] == str2[i])
        {
            ans = ans + "0";
        }
        else
        {
            ans = ans + "1";
        }
    }
    cout << ans << endl;

    return 0;
}
