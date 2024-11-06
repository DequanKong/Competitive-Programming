#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 1e5+5;

vector<vector<pair<int,int>>> adj(MM);
bool vis[MM];
ll ans = 0, edges = 0, diameter = 0, leaf = 0;

void dfs(int cur, int num) {
    vis[cur] = true;
    if (num > diameter) {
        leaf = cur; diameter = num;
    }
    for (auto [a,b]: adj[cur]) {
        if (!vis[a]) dfs(a,num+b);
    }
}

int main(){
    fast();
    
    int N; cin >> N;
    for (int i = 0; i < N; ++i) {
        int a,b,c; cin >> a >> b >> c;
        edges += c;
        adj[a].push_back({b,c}); adj[b].push_back({a,c});
    }
    dfs(0,0);

    cout << 2*edges - diameter << "\n";
    
}