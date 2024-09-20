#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    priority_queue<int> pr;
    int crIn = 0;
    while (n--)
    {
        int out, in;
        cin >> out >> in;

        crIn = crIn + (in - out);
        pr.push(crIn);
    }
    cout << pr.top() << endl;

    return 0;
}