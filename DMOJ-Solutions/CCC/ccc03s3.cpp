#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

bool vis[25][25];
char grid[25][25];
int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int tiles, r, c;

int bfs(pair<int,int> start) {
    queue<pair<int,int>> q; q.push(start);
    vis[start.first][start.second] = true;
    int area = 0;
    while (!q.empty()) {
        pair<int,int> cur = q.front(); q.pop(); area++;
        int x = cur.first, y = cur.second;
        for (int i = 0; i < 4; ++i) {
            int xNew = x + dir[i][0], yNew = y + dir[i][1];
            if (xNew >= 0 and xNew < r and yNew < c and yNew >= 0 and !vis[xNew][yNew]) {
                q.push({xNew,yNew});
                vis[xNew][yNew] = true;
            }
        }
    }
    return area;
}
int main() {
    
    memset(vis,false,sizeof(vis));
    cin >> tiles >> r >> c;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> grid[i][j];
            if (grid[i][j] == 'I') vis[i][j] = true;
           
        }
    }
    vector<int> rooms;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (vis[i][j] == false) rooms.push_back(bfs({i,j}));
        }
    }
    sort(rooms.begin(),rooms.end(),greater<int>());
    int count = 0;
    for (int i = 0; i < rooms.size() and tiles - rooms[i] >= 0; ++i) {
        count++; tiles -= rooms[i];
    }
    if (count == 1) {
        cout << count << " room, " << tiles << " square metre(s) left over" << endl; return 0;
    }
    cout << count << " rooms, " << tiles << " square metre(s) left over" << endl;
}