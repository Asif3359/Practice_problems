#include <bits/stdc++.h>
using namespace std;

int main()
{
    const double PI = 2 * acos(0.0);
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        double maxDistance = 0.0;

        for (int i = 0; i < n; i++)
        {
            int x, y;
            scanf("%d %d", &x, &y);

            double distance = sqrt(x * x + y * y);
            maxDistance = max(maxDistance, distance);
        }

        double circumference = 2 * PI * maxDistance;
        printf("%.6lf\n", circumference);
    }

    return 0;
}
