#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll adj[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            if (a != -1) {
                adj[i][j] = a;
            } else {
                adj[i][j] = INT_MAX;  
            }
        }
    }

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (adj[i][k] != INT_MAX && adj[k][j] != INT_MAX) {
                    adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
                }
            }
        }
    }

    ll max_dist = -1;  

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && adj[i][j] != INT_MAX) {  
                max_dist = max(max_dist, adj[i][j]);
            }
        }
    }

    if (max_dist == -1) {
        cout << "0" << endl; 
    } else {
        cout << max_dist << endl;  
    }

    return 0;
}

