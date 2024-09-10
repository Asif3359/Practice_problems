#include <bits/stdc++.h>
#define ll long long int
#define INF 1e18
#define nl '\n'
using namespace std;

const int N = 105;
vector<pair<int, int>> adj[N];
ll dis[N];
int p[N];

void dijkstra(int src, int n)
{
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }

    dis[src] = 0;
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    pq.push({0, src});

    while (!pq.empty())
    {
        int parentNode = pq.top().second;
        ll parentCost = pq.top().first;
        pq.pop();

        if (parentCost > dis[parentNode])
            continue;

        for (auto &child : adj[parentNode])
        {
            int childNode = child.second;
            ll childCost = child.first;

            if (dis[parentNode] + childCost < dis[childNode])
            {
                dis[childNode] = dis[parentNode] + childCost;
                pq.push({dis[childNode], childNode});
                p[childNode] = parentNode;
            }
        }
    }
}

int main()
{
    int n, s, f;
    cin >> n >> s >> f;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int w;
            cin >> w;

            if (w != -1 && i != j)
            {
                adj[i].push_back({w, j});
            }
        }
    }

    dijkstra(s, n);

    if (dis[f] == INF)
    {
        cout << -1 << nl;
    }
    else
    {
        cout << dis[f] << nl;
    }

    return 0;
}
