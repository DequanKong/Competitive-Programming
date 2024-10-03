#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

int main() {
    boost();
    int R, C; cin >> R >> C;
    bool vis [R][C]; int ans = 0;
    memset(vis,false,sizeof(vis));
    char grid[R][C];
    
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> grid[i][j];
            if (grid[i][j] == '*') vis[i][j] = true;
        }
    }
    int A, B; cin >> A >> B;
    
    queue<pair<int,int>> q; q.push({A,B});
    int dir[4][2] = {{0,-1},{0,1},{1,0},{-1,0}};
    vis[A][B] = true;
    while (!q.empty()) {
        pair<int,int> cur = q.front(); q.pop();
        
        int x = cur.first, y = cur.second;
        if (grid[x][y] == 'S') ans += 1;
        if (grid[x][y] == 'M') ans += 5;
        if (grid[x][y] == 'L') ans += 10;
        for (int i = 0; i < 4; ++i) {
            int xN = x + dir[i][0], yN = y + dir[i][1];
            if (xN < R and yN < C and xN >= 0 and yN >= 0 and !vis[xN][yN]) {
                vis[xN][yN] = true;
                q.push({xN,yN});
            }
        }
    }
    cout << ans << endl;
}