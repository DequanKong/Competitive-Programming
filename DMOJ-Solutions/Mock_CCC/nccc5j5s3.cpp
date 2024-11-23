#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MN = 50+5;
const int MM = 2500;

int n, m;
vector<pair<int,int>> edge(MM);
int adj[MN][MN];
bool vis[MN];

void bfs(int start, pair<int,int> edge) {
    queue<int> q; q.push(start); adj[edge.first][edge.second] = 0;
    memset(vis,false,sizeof(vis));
    
    while (!q.empty()) {
        int cur = q.front(); q.pop();
        
        for (int i = 1; i <= n; ++i) {
            if (adj[cur][i] == 1) {
                if (!vis[i]) {
                    vis[i] = true;
                    if (i == n) { adj[edge.first][edge.second] = 1; return; }
                    q.push(i);
                }
            }
        }
    }
    adj[edge.first][edge.second] = 1;
    
}
int main() {
    fast();
    cin >> n >> m;
    for (int i = 0; i < MN; ++i) {
        for (int j  =0; j < MN; ++j) adj[i][j] = 0;
    }
    for (int i = 0; i < m; ++i) {
        int x, y; cin >> x >> y;
        adj[x][y] = 1;
        edge[i].first = x; edge[i].second = y;
    }
    
    for (int i = 0; i < m; ++i) {
        bfs(1, edge[i]);
        if (vis[n] == 1) cout << "YES\n";
        else cout << "NO\n";
    }
    
    
}