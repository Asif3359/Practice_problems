#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    long long A[N + 1] = {0}; 

    for (int i = 1; i <= N; ++i)
    {
        int x;
        cin >> x;
        A[i] = A[i - 1] + x;
    }

    int Q;
    cin >> Q;

    while (Q--)
    {
        long long S;
        cin >> S;

        int left = 1, right = N, idx = -1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (A[mid] >= S)
            {
                idx = mid;       
                right = mid - 1; 
            }
            else
            {
                left = mid + 1; 
            }
        }

        cout << idx << '\n'; 
    }

    return 0;
}
