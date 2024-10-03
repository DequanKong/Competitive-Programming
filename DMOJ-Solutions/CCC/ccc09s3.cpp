#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

int adj[50][50];
bool vis[50];
int dist[50];
void update( int x, int y) {
    adj[x][y] = 1;
    adj[y][x] = 1;
}

void bfs(int start) {
    queue <int> q; q.push(start);
    vis[start] = true; dist[start] = 0;
    while (!q.empty()) {
        int cur = q.front(); q.pop();
        for (int i = 0; i < 50; ++i) {
            if (adj[cur][i] == 1 and !vis[i]) {
                vis[i] = true;
                q.push(i);
                dist[i] = dist[cur] + 1;
            }
        }
    }
}
int main() {
    boost();
    memset(adj,0,sizeof(adj));
    update(0,5); update(1,5); 
    update(2,5); update(2,14); update(2,3);update(2,4);
    update(3,5); update(3,4);
    update(4,5);  update(5,6); update(6,7); update(7,8);
    update(8,9); update(8,11); update(9,10); update(10,11);
    update(11,12); update(12,13); update(12,14);
    update(15,16); update(15, 17); update(16,17);
    
    while (true) {
        
        char c; cin >> c; int x, y;
        if (c == 'q') return 0;
        memset(vis, false, sizeof(vis));
        fill(begin(dist), end(dist), INT_MAX);
        if (c == 'i') {
            cin >> x >> y; x--; y--;
            update(x,y);
        }
        if (c == 'd') {
            cin >> x >> y; x--; y--;
            adj[x][y] = 0; adj[y][x] = 0;
        }
        if (c == 'n') {
            cin >> x; int ans = 0; x--;
            for (int i = 0; i < 50; ++i) {
                if (adj[x][i] == 1) ans++;
            }
            cout << ans << endl;
        }
        if (c == 'f') {
            cin >> x; int ans = 0; x--;
            vector<bool> vis2(50);
            for (int i = 0; i < 50; ++i) {
                if (adj[x][i] == 1) {
                    for (int j = 0; j < 50; ++j) {
                        if (j != x and adj[i][j] == 1 and adj[x][j] == 0 and !vis2[j]) {
                            ans++; vis2[j] = true;
                        }
                    }
                }
            }
            cout << ans << endl;
        }
        if (c == 's') {
            cin >> x >> y; x--; y--;
            bfs(x);
            if (dist[y] == INT_MAX) { cout << "Not connected" << endl; }
            else { cout << dist[y] << endl;}
        }
    }
}