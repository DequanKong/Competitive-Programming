#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 200005;
bool vis[MM], pathCheck[MM], rabVis[MM], check[MM];
int bestPath[MM];
vector<int> dis(MM,-1);
vector<vector<int>> adj(MM);

int X, Y;
void bfs(int start) {
    queue<int> q; q.push(start); dis[start] = 0;
    while (!q.empty()) {
        int cur = q.front(); q.pop();
        for (int i: adj[cur]) {
            if (!rabVis[i]) {
                q.push(i); rabVis[i] = true;
                dis[i] = dis[cur] + 1;
            }
        }
    }
}

int main() {
    fast();
    int N, R; cin >> N >> R;
    for (int i = 0; i < N-1; ++i) {
        int x, y; cin >> x >> y; adj[x].push_back(y); adj[y].push_back(x);
    }
    
    queue<int> q;
    memset(vis,false,sizeof(vis));
    memset(bestPath,-1,sizeof(bestPath));
    memset(check,false,sizeof(check));
    vector<int> rab;
    while (R--) {
        int x; cin >> x;
        rab.push_back(x);
        check[x] = true;
    }
    cin >> X >> Y;
    q.push(X); vis[X] = true;
    while (!q.empty()) {
        int cur = q.front(); q.pop();
        for (int i: adj[cur]) {
            if (!vis[i]) {
                vis[i] = true; q.push(i);
                bestPath[i] = cur;
            }
        }
    }
    vector<int> path;
    memset(pathCheck,false,sizeof(pathCheck));
    memset(rabVis,false,sizeof(rabVis));
    for (int node = Y; node != -1; node = bestPath[node]) {
        path.push_back(node);
        rabVis[node] = true;
    }
    reverse(path.begin(), path.end());
    for (int i: path) bfs(i);
    int ans = INT_MAX;
    for (int i: rab) {
        ans = min(ans,dis[i]);
    }
    cout << ans << "\n";
}