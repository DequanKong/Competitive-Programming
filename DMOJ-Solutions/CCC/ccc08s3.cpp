#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";

bool vis[20][20];
int dis[20][20];
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
int main() {
    boost();
    int t; cin >> t;
    while (t--) {
        int r, c; cin >> r >> c;
        memset(vis,false,sizeof(vis));
        memset(dis,0x3f,sizeof(dis));
        char grid[r][c];
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                cin >> grid[i][j];
                if (grid[i][j] == '*') vis[i][j] = true;
            }
        }
        queue<pair<int,int>> q; q.push({0,0});
        vis[0][0] = true;
        dis[0][0] = 1;
        while (!q.empty()) {
            int x = q.front().first, y = q.front().second; q.pop();

            if (grid[x][y] == '+') {
                for (int i = 0; i < 4; ++i) {
                    int xN = x + dir[i][0], yN = y + dir[i][1];
                    if (xN >= 0 and yN >= 0 and xN < r and yN < c and !vis[xN][yN]) {
                        vis[xN][yN] = true;
                        dis[xN][yN] = dis[x][y] + 1;
                        q.push({xN,yN});
                    }
                }
            }
            if (grid[x][y] == '|') {
                for (int i = 2; i < 4; ++i) {
                    int xN = x + dir[i][0], yN = y + dir[i][1];
                    if (xN >= 0 and yN >= 0 and xN < r and yN < c and !vis[xN][yN]) {
                        vis[xN][yN] = true;
                        dis[xN][yN] = dis[x][y] + 1;
                        q.push({xN,yN});
                    }
                }
            }
            if (grid[x][y] == '-') {
                for (int i = 0; i < 2; ++i) {
                    int xN = x + dir[i][0], yN = y + dir[i][1];
                    if (xN >= 0 and yN >= 0 and xN < r and yN < c and !vis[xN][yN]) {
                        vis[xN][yN] = true;
                        dis[xN][yN] = dis[x][y] + 1;
                        q.push({xN,yN});
                    }
                }
            }
            
        }
        if (grid[0][0] == '*' or grid[r-1][c-1] == '*') { cout << -1 << endl; continue;}
        if (!vis[r-1][c-1]) cout << -1 << endl;
        if (vis[r-1][c-1]) cout << dis[r-1][c-1] << endl;
        
    }
}