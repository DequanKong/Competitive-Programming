#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 1500;
ll grid[MM][MM];
bool vis[MM][MM];
int dis[MM][MM];
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
int N, M, K;
queue<pair<int,int>> q;
void bfs() {
    while (!q.empty()) {
        int x = q.front().first, y = q.front().second; q.pop();
        
        if (dis[x][y] == K) return;
        for (int i = 0; i < 4; ++i) {
            int xNew = x + dir[i][0], yNew = y + dir[i][1];
            if (xNew >= 0 and xNew < N and yNew >= 0 and yNew < M and !vis[xNew][yNew]) {
                vis[xNew][yNew] = true;
                q.push({xNew,yNew});
                dis[xNew][yNew] = dis[x][y] + 1;
                grid[xNew][yNew] = grid[x][y];
            }
        }
    }
}
int main() {
    fast();
 
    cin >> N >> M >> K;
    vector<pair<int,int>> v;
    memset(vis,false,sizeof(vis));
    memset(dis,-1,sizeof(dis));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> grid[i][j];
            if (grid[i][j] != 0) {
                v.push_back({i,j});
                vis[i][j] = true;
                dis[i][j] = 0;
            }
        }
    }
    sort(v.begin(),v.end(),[&](pair<int,int> p1, pair<int,int> p2) {
        return grid[p1.first][p1.second] < grid[p2.first][p2.second];
    });

    for (auto &start: v) {
        q.push({start.first,start.second});
    }
    bfs();
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (j == M-1) cout << grid[i][j];
            else cout << grid[i][j] << " ";
        }
        cout << "\n";
    }
}