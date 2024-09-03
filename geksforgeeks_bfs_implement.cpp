//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> bfs;           // To store the BFS traversal order
        vector<bool> visited(V, false); // To keep track of visited nodes
        
        // Queue for BFS
        queue<int> q;
        
        // Start BFS from node 0
        q.push(0);
        visited[0] = 1;
        
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            
            // Explore all adjacent vertices of the current node
            for (int it : adj[node]) {
                if (!visited[it]) {
                    q.push(it);
                    visited[it] = 1;
                }
            }
        }
        
        return bfs; // Return the BFS traversal order
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

