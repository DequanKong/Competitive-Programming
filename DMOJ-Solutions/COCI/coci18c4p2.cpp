#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 1e5+5;

vector<vector<int>> adj(MM);
bool vis[MM], out[MM];

int main(){
    fast();
   
    int N, M; cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        int x, y; cin >> x >> y;
        adj[y].push_back(x);
    }
    queue<int> q; q.push(1);
    while (!q.empty()) {
        int cur = q.front(); q.pop();
        for (int x: adj[cur]) {
            if (!vis[x]) {
                vis[x] = true; out[x] = true; q.push(x);
            }
        }
    }
    if (adj[1].size() == 0) out[1] = true;
    for (int i = 1; i <= N; ++i) cout << out[i];
}