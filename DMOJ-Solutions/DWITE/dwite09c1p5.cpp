#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 105;
int vis[MM];
int depth[MM];
int ans = 0;

vector<vector<int>> adj(MM);
void dfs(int cur, int pre) {
    vis[cur] = true;
    
    for (int nxt: adj[cur]) {
        if (vis[nxt] == 0) {
            depth[nxt] = depth[cur] + 1;
            vis[nxt] = 1;
            dfs(nxt, cur);
        } else if (vis[nxt] == 1){
            ans = depth[cur] - depth[nxt] + 1;
        }
    }
    
    vis[cur] = 2;
}

int main() {
    fast();
    
    for (int i = 1; i <= 5; ++i) {
        ans = 0;
        int N; cin >> N;
        for (int i = 1; i <= N; ++i) {
            int x, y; cin >> x >> y; adj[x].push_back(y);
        }
        depth[1] = 0;
        dfs(1,-1);
        cout << ans << "\n";
        
        for (int j = 0; j < MM; j++) {
            adj[j].clear();
            memset(vis,false,sizeof(vis));
            memset(depth,0,sizeof(depth));
        }
    }
}