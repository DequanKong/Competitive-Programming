#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";

int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

int main() {
    boost();
    int t; cin >> t;
    while (t--) {
        int l, w; cin >> l >> w;
        bool vis[w+1][l+1];
        char grid[w+1][l+1];
        int dis[w+1][l+1];
        memset(vis,false,sizeof(vis));
        int x1, y1, x2 = 0, y2 = 0;
        for (int i = 0; i < w; ++i) {
            for (int j = 0; j < l; ++j) {
                cin >> grid[i][j];
                if (grid[i][j] == 'X') vis[i][j] = true; 
                if (grid[i][j] == 'C') { x1 = i; y1 = j;}
                if (grid[i][j] == 'W') { x2 = i; y2 = j;}
            }
        }
        queue<pair<int,int>> q; q.push({x1,y1}); vis[x1][y1] = true; dis[x1][y1] = 0;
        while (!q.empty()) {
            int x = q.front().first, y = q.front().second; q.pop();
            if (x == x2 and y == y2) { vis[x2][y2] = true; break;}
            for (int i = 0; i < 4; ++i) {
                int xN = x + dir[i][0], yN = y + dir[i][1];
                if (xN >= 0 and xN < w and yN >= 0 and yN < l and !vis[xN][yN]) {
                    vis[xN][yN] = true;
                    dis[xN][yN] = dis[x][y] + 1;
                    q.push({xN,yN});
                }
            }
        }
        if (dis[x2][y2] >= 60 or !vis[x2][y2]) { cout << "#notworth" << endl;}
        else { cout << dis[x2][y2] << endl;}
    }
}