#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 1000;

int vis[MM];
vector<vector<int>> adj(MM);

bool check = false;

void dfs(int cur) {
    vis[cur] = 1;
    for(int nxt : adj[cur]) {
        if( vis[nxt] == 1) {
            //find cycle
            check = true;
        } else if (vis[nxt] == 0 ) {
            dfs(nxt);
        }
    }
    vis[cur] = 2;
}

int main() {
    fast();
    
    int N; cin >> N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int x; cin >> x;
            if (x == 1) adj[i].push_back(j);
        }
    }
    for (int i = 0; i < N; ++i) {
        if (!vis[i]) dfs(i);
    }
    if (check) cout << "NO\n";
    else cout << "YES\n";
}