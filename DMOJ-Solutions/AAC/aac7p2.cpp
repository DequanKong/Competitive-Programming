#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 2e5+5;
vector<vector<int>> adj(MM);
vector<pair<int,int>> ans;
int n,k;

void dfs(int cur, int prev, bool check) {
    for (int child: adj[cur]) {
        if (child == prev) continue;
        if (check) ans.push_back({prev,child});
        dfs(child,cur,!check);
    }
}

int main() {
    fast();
    cin >> n;
    for (int i = 1; i <= n-1; ++i) {
        int x,y; cin >> x >> y; adj[x].push_back(y); adj[y].push_back(x);
    }
    
    k = adj[1].size() + 1;
    cout << k << "\n";
    
    for (int i: adj[1]) {
        ans.clear();
        dfs(i,1,false);
        cout << ans.size() + 1 << "\n";
        for (auto &[u,v]: ans) cout << u << " " << v << "\n";
    }
    
    ans.clear();
    dfs(1,1,false);
    cout << ans.size() + 1 << "\n";
    for (auto &[u,v]: ans) cout << u << " " << v << "\n";

}