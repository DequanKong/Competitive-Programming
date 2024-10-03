#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

const int MM = 5e6;

int adj[4][4];
bool visited[4];
void bfs(int start) {
    queue <int> q; q.push(start); visited[start] = true;
    while (!q.empty()) {
        int node = q.front(); q.pop();
        for (int i = 0; i < 4; ++i) {
            if (adj[node][i] == 1 and !visited[i]) {
                visited[i] = true; q.push(i);
            }
        }
    }
}
int main() {
    int ans = 0;
    for (int i = 0; i < 4;++i) {
        for (int j = 0; j <4; ++j) {
            cin >> adj[i][j];
            if (adj[i][j] == 1) ans++;
        }
    }
    
    if (ans != 6) { cout << "No" << endl; return 0;}
    bfs(0);
    
    for (int i = 0; i < 4; ++i) {
        if (!visited[i]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}