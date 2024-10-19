#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 1005;
int main() {
    boost();
    int n, m; cin >> n >> m;
    char grid[MM][MM]; bool vis[MM][MM]; int dis[MM][MM];
    memset(vis,false,sizeof(vis));
    memset(dis,0,sizeof(dis));
    pair<int,int> start, end;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
            if (grid[i][j] == 'X') {
                vis[i][j] = true;
            }
            if (grid[i][j] == 's') { start = {i,j};}
            if (grid[i][j] == 'e') end  = {i,j};
        }
    }
    queue<pair<int,int>> q; q.push(start); vis[start.first][start.second] = true;
    dis[start.first][start.second] = 0;
    int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
    while (!q.empty()) {
        int x = q.front().first, y = q.front().second; q.pop();
        for (int i = 0; i < 4; ++i) {
            int xNew = x + dir[i][0], yNew = y+dir[i][1];
            if (xNew >= 0 and xNew < n and yNew >= 0 and yNew < m and !vis[xNew][yNew]) {
                q.push({xNew,yNew});
                vis[xNew][yNew] = true;
                dis[xNew][yNew] = dis[x][y] + 1;
            }
        }
    }
    if (!vis[end.first][end.second]) { cout << -1 << "\n"; return 0;}
    cout << dis[end.first][end.second]-1 << "\n";
}