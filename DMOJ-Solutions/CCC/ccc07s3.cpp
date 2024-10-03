#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";

vector<vector<int>> v(10000); bool vis[10000];
int dis[10000];

void bfs(int start) {
    queue<int> q; q.push(start);
    vis[start] = true; dis[start] = -1;
    
    while (!q.empty()) {
        int cur = q.front(); q.pop();
        for (int i: v[cur]) {
            if (!vis[i]) {
                vis[i] = true; dis[i] = dis[cur] + 1; q.push(i);
            }
        }
    }
}
int main() {
    boost();
    
    int n; cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int x, y; cin >> x >> y; v[x].push_back(y);
    }
    int x = -1, y = -1;
    while (! (x == 0 and y == 0)) {
        cin >> x >> y;
        if (x == 0 and y == 0) continue;
        memset(vis,false,sizeof(vis));
        memset(dis,0,sizeof(dis));
        bfs(x);
        if (!vis[y]) cout << "No" << endl;
        if (vis[y]) cout << "Yes" << " " << dis[y] << endl;
    }
}