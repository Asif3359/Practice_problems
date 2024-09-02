#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 0, j = 1;

    while (j < s.length())
    {
        if (s[i] == s[j])
        {
            i++, j++; // Move both pointers forward when there's a match
        }
        else
        {
            j -= i - 1; // Reset j to just after the starting position of the match
            i = 0;      // Reset i to the beginning of the string
        }
    }

    if (i > j - i)
    { // Check if the length of the potential original string is greater than the overlap
        cout << "YES" << endl;
        cout << s.substr(0, i) << endl; // Print the original string
    }
    else
    {
        cout << "NO" << endl; // No valid overlap found
    }
}
