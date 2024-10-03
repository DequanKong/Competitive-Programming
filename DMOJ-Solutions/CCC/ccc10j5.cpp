#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

int grid[8][8];
int visited[8][8];
int dist[8][8];
int xOne, yOne, xTwo, yTwo;

void bfs(pair<int,int> start) {
    queue<pair<int,int>> q; q.push(start);
    visited[start.first][start.second] = true;
    dist[start.first][start.second] = 0;
    int dir [8][2] = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};
    
    while (!q.empty()) {
        pair <int,int> cur = q.front(); q.pop();
        int x = cur.first, y = cur.second;
        if (x == xTwo and y == yTwo) return;
        for (int i = 0; i < 8; ++i) {
            int xNew = x + dir[i][0], yNew = y + dir[i][1];
            if (xNew >= 0 and yNew <= 7 and yNew >= 0 and xNew <= 7 and !visited[xNew][yNew]) {
                visited[xNew][yNew] = true;
                q.push({xNew,yNew});
                dist[xNew][yNew] = dist[x][y] + 1;
            }
        }
    }
}

int main() {
    boost();
    cin >> xOne >> yOne >> xTwo >> yTwo;
    memset(visited,false,sizeof(visited));
    memset(dist,0,sizeof(dist));
    xOne --; yOne --; xTwo --; yTwo --;
    bfs({xOne, yOne});
    cout << dist[xTwo][yTwo] << endl;
}