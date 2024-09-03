#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> graph[N];
bool visited[N];
int level[N];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (int neighbor : graph[node])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                level[neighbor] = level[node] + 1;
                q.push(neighbor);
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int L;
    cin >> L;

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));

    bfs(0);

    vector<int> nodes_at_level;
    for (int i = 0; i < n; i++)
    {
        if (level[i] == L)
        {
            nodes_at_level.push_back(i);
        }
    }

    sort(nodes_at_level.rbegin(), nodes_at_level.rend());

    for (int node : nodes_at_level)
    {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
