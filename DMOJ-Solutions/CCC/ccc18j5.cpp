#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

bool vis[10000];
int dist[10000];

int main() {
    boost();
    int N; cin >> N;
    vector<int> adj[N];
    memset(vis,false,sizeof(vis));
    memset(dist,INT_MAX, sizeof(dist));
    vector<int> ending;
    for (int i = 0; i < N; ++i) {
        int M; cin >> M;
        if (M == 0) ending.push_back(i);
        while (M--) {
            int a; cin >> a; a--; adj[i].push_back(a);
        }
    }
    // bfs
    queue <int> q; q.push(0);
    vis[0] = true;
    dist[0] = 1;
    while (!q.empty()) {
        int cur = q.front(); q.pop();
        for (int nxt: adj[cur]) {
            if (!vis[nxt]) {
                vis[nxt] = true;
                q.push(nxt);
                dist[nxt] = dist[cur] + 1;
            }
        }
    }
    
    int ans = INT_MAX;
    for (int i: ending) {
         if (vis[i]) ans = min(ans,dist[i]);
    }
    for (int i = 0; i < N; ++i) {
        if (vis[i] == 0) {
            cout << "N\n" << ans << endl; return 0;
        }
    }
    cout << "Y\n" << ans << endl;
}