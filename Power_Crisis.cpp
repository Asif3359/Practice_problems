#include <iostream>
#include <vector>
using namespace std;

int find_min_m(int N)
{
    for (int m = 1;; m++)
    {
        vector<int> regions(N);
        for (int i = 0; i < N; i++)
        {
            regions[i] = i + 1;
        }

        int pos = 0;
        while (regions.size() > 1)
        {
            regions.erase(regions.begin() + pos);
            pos = (pos + m - 1) % regions.size();
        }
        if (regions[0] == 13)
            return m;
    }
}

int main()
{
    int N;
    while (cin >> N && N != 0)
    {
        cout << find_min_m(N) << endl;
    }
    return 0;
}
