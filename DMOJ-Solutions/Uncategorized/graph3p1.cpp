#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";

const int MM = 100000;
bool vis[MM];
int dis[MM];
vector<vector<int>> adj(MM);

int main() {
    boost();
    
    int N, M; cin >> N >> M;

    while (M--) {
        int x, y; cin >> x >> y; adj[x].push_back(y); adj[y].push_back(x);
    }
    int K; cin >> K;
   
    queue<int> q;
    memset(vis,false,sizeof(vis));
    memset(dis,0,sizeof(dis));
    while (K--) {
        int x; cin >> x;
        q.push(x); dis[x] = 0; vis[x] = true;
    }
    vector<int> v;
    while (!q.empty()) {
        int cur = q.front(); q.pop();
        for (int i: adj[cur]) {
            if (!vis[i]) {
                vis[i] = true;
                q.push(i);
                dis[i] = dis[cur] + 1;
                v.push_back(dis[i]);
            }
        }
    }
    cout << *max_element(v.begin(),v.end()) << endl;
    
    return dis[0];
}