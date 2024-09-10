#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

const long long int INF = 1e18;
int nodes, edge;

const int N = 100005;

vector<pair<int, int>> adj[N];
long long int dis[N];
long long int p[N];
bool vis[N];

void dijkstra(int src)
{
    for (int i = 1; i <= nodes; i++)
    {
        dis[i] = INF;
    }

    dis[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({dis[src], src});

    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();

        int parentNode = parent.second;
        int parentCost = parent.first;

        vis[parentNode] = true;

        for (auto child : adj[parentNode])
        {
            int childCost = child.first;
            int childNode = child.second;

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
    cin >> nodes >> edge;

    while (edge--)
    {
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back(make_pair(w, v));
        adj[v].push_back(make_pair(w, u));
    }

    int src = 1;

    dijkstra(src);

    if (vis[nodes] != true)
    {
        cout << -1 << endl;
        return 0;
    }

    int current = nodes;
    vector<int> path;

    while (true)
    {
        path.push_back(current);
        if (current == src)
        {
            break;
        }
        current = p[current];
    }

    reverse(path.begin(), path.end());

    for (auto child : path)
    {
        cout << child << " ";
    }

    return 0;
}