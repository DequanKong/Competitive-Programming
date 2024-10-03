#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

const int MM = 1e5+1;
bool vis[MM];
int dis[MM];
int X, Y;
void bfs(int start) {
    vis[start] = true; dis[start] = 0;
    queue <int> q; q.push(start);
    while (!q.empty()) {
        int cur = q.front(); q.pop();
        if (cur == Y) return;
        if (2*cur < MM and !vis[2*cur]) {
            vis[2*cur] = true; q.push(2*cur); dis[2*cur] = dis[cur] + 1;
        }
        if (cur + 1 < MM and !vis[cur+1]) {
            vis[cur+1] = true; q.push(cur+1); dis[cur+1] = dis[cur]+1;
        }
        if (cur - 1 >= 0 and !vis[cur-1]) {
            vis[cur-1] = true; q.push(cur-1); dis[cur-1] = dis[cur] + 1;
        }
    }
}
int main() {
    boost();
    cin >> X >> Y;
    memset(vis,false, sizeof(vis));
    bfs(X);
    cout << dis[Y] << endl;
}