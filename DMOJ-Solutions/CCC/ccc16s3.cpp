#include <bits/stdc++.h>
using namespace std;
const int MM = 1e5+5;
int N, M, rt, far, len, cnt; bool pho[MM]; vector<int> adj[MM];
void dfs1(int u, int par){ 
    for(int v : adj[u]){
        if(v == par) continue;
        dfs1(v, u);  pho[u] |= pho[v];
    }
}
void dfs2(int u, int par, int dis){
    if(dis > len) { len = dis; far = u;}
    for(int v : adj[u]){
        if(v == par || !pho[v]) continue;
        dfs2(v, u, dis+1);
    }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M;
    for(int i=1, x; i<=M; i++){
        cin >> x; pho[x] = true;  rt = x;
    }
    for(int i=1, u, v; i<N; i++) {
        cin >> u >> v;  adj[u].push_back(v); adj[v].push_back(u);
    }
    dfs1(rt, -1); dfs2(rt, -1, 0);  len=0;  dfs2(far, -1, 0);
    for(int i=0; i<N; i++) cnt += pho[i];
    cout << 2*(cnt-1) - len << '\n';
}