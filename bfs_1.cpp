#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> v[N];
bool vis[N];
int parent[N];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    parent[src] = -1; // Source node has no parent

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : v[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                parent[child] = par; // Store the parent of the child
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
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a); 
    }

    int q;
    cin >> q;
    while (q--)
    {
        int src, des;
        cin >> src >> des;

        memset(vis, false, sizeof(vis));
        memset(parent, -1, sizeof(parent));

        bfs(src);

        vector<int> path;
        int x = des;
        while (x != -1)
        {
            path.push_back(x);
            x = parent[x];
        }

        reverse(path.begin(), path.end());

        if (path.front() == src)
        {
            cout << path.size()-1 << endl; 
        }
        else
        {
            cout << -1 << endl; 
        }
    }

    return 0;
}
