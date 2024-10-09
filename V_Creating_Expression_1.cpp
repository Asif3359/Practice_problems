#include <iostream>
using namespace std;

bool sub_set_sum(int idx, long long currentSum, int N, long long X, int A[])
{
    if (idx == N)
    {
        return currentSum == X;
    }
    return sub_set_sum(idx + 1, currentSum + A[idx], N, X, A) ||
           sub_set_sum(idx + 1, currentSum - A[idx], N, X, A);
}

int main()
{
    int N;
    long long X;
    cin >> N >> X;

    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    if (sub_set_sum(0, 0, N, X, A))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
