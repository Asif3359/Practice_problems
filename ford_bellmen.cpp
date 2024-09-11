#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const int N = 1e5 + 5;

int dis[N];

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        Edge ed = Edge(u, v, c);
        EdgeList.push_back(ed);
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }

    dis[1] = 0;
    for (int i = 2; i <= n  ; i++)
    {
        for (Edge ed : EdgeList)
        {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if(dis[i]==INT_MAX)
        {
            cout << 30000 << " ";
        }
        else
        {
            cout << dis[i] << " ";
        }
    }
    cout << endl;

    return 0;
}

/*

4 4
0 2 5
0 3 12
2 1 2
1 3 3

*/

