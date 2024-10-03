#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
const int MM = 1e5;
vector<vector<int>> adj(MM+5);
bool vis[MM+5];

bool bfs(int start, int find) {
    memset(vis,false,sizeof(vis));
    queue<int> q; q.push(start); vis[start] = true;
    while (!q.empty()) {
        int cur = q.front(); q.pop();
        if (cur == find) { return true;}
        for (int i: adj[cur]) {
            if (!vis[i]) {
                vis[i] = true; q.push(i);
                if (i == find) return true;
            }
        }
    }
    return false;
}

int main() {
    boost();
    
    ll N, M; cin >> N >> M;
    
    while (M--) {
        int x, y; cin >> x >> y; adj[y].push_back(x); 
    }
    int p, q; cin >> p >> q;
    if (adj[p].empty() and adj[q].empty()) { cout << "unknown" << endl;}
    else if (bfs(q,p)) { cout << "yes" << endl;}

    else if (bfs(p,q)){ cout << "no" << endl;}
    else { cout << "unknown" << endl;}
}