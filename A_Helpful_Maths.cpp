#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin >> st;

    vector<int> nums;
    for (int i = 0; i < st.size(); i++)
    {

        if (st[i] >= '0' && st[i] <= '9')
        {
            nums.push_back(st[i] - '0');
        }
    }
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 1; i++)
    {
        cout << nums[i] << "+";
    }
    cout << nums[nums.size() - 1];

    return 0;
}