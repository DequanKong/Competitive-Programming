#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 2e5;
bool vis[MM];
vector<vector<int>> adj(MM);
vector<int> ans;

void dfs(int v) {
    vis[v] = true;
    for (int u: adj[v]) {
        if (!vis[u]) dfs(u);
    }
    ans.push_back(v);
}

int main() {
    fast();
    
    int n; cin >> n;
    for (int node = 1; node <= n; ++node) {
        int c; cin >> c; // cases
        while (c--) {
            int sub; cin >> sub;
            adj[sub].push_back(node);
        }
    }
    // topo
    for (int i = 1; i <= n; ++i) {
        if (!vis[i]) dfs(i);
    }
    reverse(ans.begin(),ans.end());
    for (int x: ans) cout << x << " ";
    
}