#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 1e4+5;
vector<int> adj[MM];
bool vis[MM];
int ans = 0, leaf = 0;

void dfs(int start, int num) {

    vis[start] = true;
    if (num > ans) {
        leaf = start;
        ans = num;
    }
    for (int x: adj[start]) {
        if (!vis[x]) {
            dfs(x, num+1);
        }
    }
}

int main(){
    fast();
    
    int N; cin >> N;
    for (int i = 0; i < N-1; ++i) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    dfs(1,0);
    ans = 0;
    
    memset(vis,false,sizeof(vis));
    dfs(leaf,0);
    cout << ans << "\n";
}