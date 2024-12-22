#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool topo(int n, vector<vector<int>>& adj, vector<int>& permutation) {
    vector<int> inDegree(n + 1, 0);
    
    for (int i = 1; i <= n; ++i) {
        for (int neighbor : adj[i]) {
            inDegree[neighbor]++;
        }
    }
    
    queue<int> q;
    for (int i = 1; i <= n; ++i) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }
    
    vector<int> topoOrder;
    while (!q.empty()) {
        if (q.size() > 1) return false;
        
        int node = q.front();
        q.pop();
        topoOrder.push_back(node);
        
        for (int neighbor : adj[node]) {
            inDegree[neighbor]--;
            if (inDegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }
    
    // cycle
    if (topoOrder.size() != n) {
        return false;
    }
    
    for (int i = 0; i < n; ++i) {
        permutation[topoOrder[i]] = i + 1;
    }
    
    return true;
}

int main() {
    fast();
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }

    vector<int> permutation(n + 1, 0);
    if (topo(n, adj, permutation)) {
        cout << "Yes\n";
        for (int i = 1; i <= n; ++i) {
            cout << permutation[i] << " ";
        }
        cout << "\n";
    } else {
        cout << "No\n";
    }

    return 0;
}