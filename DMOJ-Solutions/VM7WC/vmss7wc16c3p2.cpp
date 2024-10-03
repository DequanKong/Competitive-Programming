#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

bool visited[2000];
void bfs(int start, vector<vector<int>> adj) {
    queue <int> q; q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        int cur = q.front(); q.pop();
        
        for (int nxt = 0; nxt < adj[cur].size(); ++nxt) {
            if (adj[cur][nxt] == 1 and !visited[nxt]) {
                visited[nxt] = true;
                q.push(nxt);
            }
        }
    }
}

int main() {
    boost();
    memset(visited, false, sizeof(visited));
    int N, M,A,B;
    cin >> N >> M >> A >> B;
    vector<vector<int>> adj(N,vector<int> (N,0));
    for (int i = 0; i < M; ++i) {
        int a, b; cin >> a >> b; a--; b--;
        adj[a][b] = 1; adj[b][a] = 1;
    }

    A--; bfs(A, adj);
    B--;
    if (visited[B]) { cout << "GO SHAHIR!" << endl;}
    else { cout << "NO SHAHIR!" << endl;}
}