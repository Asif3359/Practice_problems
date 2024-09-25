#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t; 
    while (t--)
    {
        int n, m;
        cin >> n >> m; 

        vector<int> a(n);
        set<int> uniqueValues; 

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            uniqueValues.insert(a[i]);
        }

        for (int i = 0; i < m; i++)
        {
            char op;
            int l, r;
            cin >> op >> l >> r; 

            set<int> newValues;

            for (int val : uniqueValues)
            {
                if (val >= l && val <= r)
                {
                    if (op == '+')
                    {
                        newValues.insert(val + 1); 
                    }
                    else if (op == '-')
                    {
                        newValues.insert(val - 1); 
                    }
                }
                else
                {
                    newValues.insert(val); 
                }
            }

            uniqueValues = newValues;

            cout << *uniqueValues.rbegin() << " ";
        }
        cout << endl; 
    }

    return 0;
}
