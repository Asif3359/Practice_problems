#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int sum = 0;
    while (n--)
    {
        long long int a;
        cin >> a;

        sum = sum + a;
    }

    if(sum == 0)
    {
        cout << "EASY\n";
    }
    else
    {
        cout << "HARD\n";
    }
    

    return 0;
}