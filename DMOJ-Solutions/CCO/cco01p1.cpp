#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 101;
int vis[MM], path[MM], dep[MM];
vector<int> cycles;

void dfs(int cur) {
    vis[cur] = 1;
    int nxt = path[cur];
    if (vis[nxt] == 1) cycles.push_back(dep[cur]-dep[nxt]+1);
    else if (vis[nxt] == 0) { dep[nxt] = dep[cur] + 1; dfs(nxt); }
    vis[cur] = 2;
}

int main() {
    fast();

    int N = -1;
    while (N!=0) {
        cin >> N;
        if (N==0) return 0;
        for (int i = 0; i < N; ++i) {
            int x, y; cin >> x >> y;
            path[x] = y;
        }
        cycles.clear();
        memset(vis,0,sizeof(vis));
        memset(dep,0,sizeof(dep));
        for (int i = 1; i <= N; ++i) {
            if (vis[i] == 0) dfs(i);
        }
        int ans = 1;
        for (int i = 0; i < cycles.size(); ++i) {
            ans = lcm(ans,cycles[i]);
        }
        cout << ans << "\n";
    }
}