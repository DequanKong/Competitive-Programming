#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";

const int MM = 1000;
char grid[MM][MM];
bool vis[MM][MM];
int n, m;

int dir[4][2] = {{0,-1},{0,1},{1,0},{-1,0}};
int bfs(pair<int,int> start) {
    queue<pair<int,int>> q; q.push(start);
    vis[start.first][start.second] = true;
    bool check = true;
    while (!q.empty()) {
        pair<int,int> cur = q.front(); q.pop();
        if (grid[cur.first][cur.second] == '*') check = false;
        for (int i = 0; i < 4; ++i) {
            int xNew = cur.first + dir[i][0]; int yNew = cur.second + dir[i][1];
            if (xNew >= 0 and xNew < n and yNew >= 0 and yNew < m and !vis[xNew][yNew]) {
                if (grid[xNew][yNew] == '*') check = false;
                vis[xNew][yNew] = true; q.push({xNew,yNew});
            }
        }
    }
    if (check) return 1;
    return 0;
}


int main() {
    boost();
     cin >> n >> m;
   
    memset(vis,false,sizeof(vis));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
            if (grid[i][j] == 'X') vis[i][j] = true;
            
        }
    }
    
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (!vis[i][j]) ans+= bfs({i,j});
        }
    }
    cout << ans << endl;
}