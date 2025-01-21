#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<double, int> pdi;
const int MM = 1003;
int N, M, x[MM], y[MM]; double dis[MM]; bool vis[MM]; vector<pdi> adj[MM];
int main(){
    cin >> N >> M;
    for(int i=1; i<=N; i++){
        cin >> x[i] >> y[i];
        for(int j=1; j<i; j++){
            double d = hypot(x[i] - x[j], y[i] - y[j]);
            adj[i].push_back({d, j});  adj[j].push_back({d, i});
        }
    }
    for(int i=1, u, v; i<=M; i++) {
        cin >> u >> v; adj[u].push_back({0, v}); adj[v].push_back({0, u});
    }
    priority_queue<pdi, vector<pdi>, greater<pdi> > q;
    fill(dis, dis+MM, 1e18);
    dis[1] = 0.0;  q.push({0.0, 1});
    while(!q.empty()){
        double d = q.top().first; int u = q.top().second; q.pop();
        if(vis[u]) continue;
        vis[u] = true;
        for(auto e : adj[u]){
            double w = e.first; int v = e.second;
            if(!vis[v] && dis[v] > w) { dis[v] = w; q.push({dis[v], v}); }
        }
    }
    double ans = 0;
    for(int i=1; i<=N; i++) ans += dis[i];
    cout << fixed << setprecision(2) << ans << endl;
}
