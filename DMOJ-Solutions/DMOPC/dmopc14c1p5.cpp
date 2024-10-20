#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int ans = 0, N, M;
const int XMM = 1000, YMM = 1000;
bool vis[XMM][YMM];
int dis[XMM][YMM];
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
char grid[XMM][YMM];

void bfs(pair<int,int> start) {
    int x1 = start.first, y1 = start.second;
    queue <pair<int,int>> q; q.push(start); vis[x1][y1] = true; dis[x1][y1] = 0;

    while (!q.empty()) {
        int x = q.front().first, y =  q.front().second; q.pop();
        for (int i = 0; i < 4; ++i) {
            int xNew = x + dir[i][0], yNew = y + dir[i][1];
            if (!vis[xNew][yNew] and xNew >= 0 and xNew < N and yNew >= 0 and yNew < M) {
//                cout << "VIS: " << xNew << " " << yNew << "\n";
                vis[xNew][yNew] = true;
                q.push({xNew,yNew});
                dis[xNew][yNew] = dis[x][y] + 1;
//                if (grid[xNew][yNew] == 'M') monkey = 1;
            }
        }
    }
}

int main() {
    fast();
    
    cin >> N >> M;
    pair<int,int> start, office;
    cin >> start.first >> start.second >> office.first >> office.second;
    memset(vis,false,sizeof(vis));
    memset(dis,0,sizeof(dis));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            char c; cin >> c; grid[i][j] = c;
            if (c == 'X') {
                vis[i][j] = true;
            }
        }
    }
    int K; cin >> K; vector<pair<int,int>> v(K);
    for (int i = 0; i < K; ++i) {
        cin >> v[i].first >> v[i].second;
    }
    bfs(start);
    
    int mn = INT_MAX;
    for (int i = 0; i < K; ++i) {
//        cout << v[i].first << " " << v[i].second << " " << dis[v[i].first][v[i].second] << "\n";
        if (vis[v[i].first][v[i].second]) mn = min(mn, dis[v[i].first][v[i].second]);
//        cout << mn << "\n";
    }
    if (mn > dis[office.first][office.second]) cout << 0 << "\n";
    else cout << dis[office.first][office.second] - mn << "\n";
}