#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 1e4 + 5;
int vis[MM];
vector<unordered_set<int>> adj(MM);

bool dfs(int n) {
    vis[n] = 1;
    for (int u: adj[n]) {
        if (vis[u] == 1) return true;
        else if (vis[u] == 0) if (dfs(u)) return true;
    }
    vis[n] = 2;
    return false;
}


int main() {
    fast();
    
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int x,y; cin >> x >> y;
        adj[x].insert(y);
    }
    
    for (int i = 1; i <= n; ++i) {
        if (vis[i] == 0) {
            if (dfs(i)) { cout << "N\n"; return 0;}
        }
    }
    cout << "Y\n";
}