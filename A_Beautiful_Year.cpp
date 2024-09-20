#include <bits/stdc++.h>
using namespace std;

bool hasDistinctDigits(int year)
{
    string yearStr = to_string(year);
    set<char> digits;

    for (char ch : yearStr)
    {
        digits.insert(ch);
    }
    return digits.size() == yearStr.size();
}

int main()
{
    int y;
    cin >> y;

    y++;
    while (!hasDistinctDigits(y))
    {
        y++;
    }
    cout << y << endl;

    return 0;
}