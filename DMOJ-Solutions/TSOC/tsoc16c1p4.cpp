#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int ans = 0, N, M;
const int XMM = 40, YMM = 55;
bool vis[XMM][YMM];
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
char grid[XMM][YMM];

void bfs(pair<int,int> start) {
    int x1 = start.first, y1 = start.second;
    queue <pair<int,int>> q; q.push(start); vis[x1][y1] = true;
    while (!q.empty()) {
        int x = q.front().first, y =  q.front().second; q.pop();
        for (int i = 0; i < 4; ++i) {
            int xNew = x + dir[i][0], yNew = y + dir[i][1];
            if (!vis[xNew][yNew] and xNew >= 0 and xNew < N and yNew >= 0 and yNew < M) {
                vis[xNew][yNew] = true;
                q.push({xNew,yNew});
            }
        }
    }
}

int main() {
    fast();
    
    cin >> N >> M;
    
    memset(vis,false,sizeof(vis));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            char c; cin >> c; grid[i][j] = c;
            if (c == '#') {
                vis[i][j] = true;
            }
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (grid[i][j] == 'M' and !vis[i][j]) {
                ans++; bfs({i,j});
            }
        }
    }
    cout << ans << "\n";
}