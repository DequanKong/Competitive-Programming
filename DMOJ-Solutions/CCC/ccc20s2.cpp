#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";

int main() {
    boost();
    
    int M, N; cin >> M >> N;
    int grid[M+1][N+1];
    bool vis[M+1][N+1];
    for (int i = 1; i <= M; ++i) {
        for (int j = 1; j <= N; ++j) {
            cin >> grid[i][j];
        }
    }
    
    if (M > 200 and N > 200) {
        memset(vis,false,sizeof(vis));
        queue<pair<int,int>> q; q.push({M,N});
        vis[M][N] = true;
        while (!q.empty()) {
            int x = q.front().first, y = q.front().second; q.pop();
            if (x == 1 and y == 1) { vis[1][1] = true; break;}
            int val = grid[x][y];
            vector<int> fact;
            for (int i = 1; i <= sqrt(val); ++i) {
                if (val %i == 0) {
                    if (val / i == 1) { fact.push_back(i);}
                    else { fact.push_back(i); fact.push_back(val/i); }
                }
            }
            bool check = false;
            for (int i : fact) {
                int x1 = i, y1 = val/i;
                if (x1 >= 1 and x1 <= M and y1 >= 1 and y1 <= N and !vis[x1][y1]) {
                    vis[x1][y1] = true; q.push({x1,y1});
                    if (x1 == 1 and y1 == 1) check = true;
                }
            }
            if (check){ vis[1][1] = true; break;}
        }
        if (vis[1][1]) { cout << "yes" << endl;}
        else { cout << "no" << endl;}
    } else {
        memset(vis,false,sizeof(vis));
        queue<pair<int,int>> q; q.push({1,1});
        vis[1][1] = true;
        while (!q.empty()) {
            int x = q.front().first, y = q.front().second; q.pop();
            if (x == M and y == N) { vis[M][N] = true; break;}
            int val = grid[x][y];
            vector<int> fact;
            for (int i = 1; i <= sqrt(val); ++i) {
                if (val %i == 0) {
                    if (val / i == 1) { fact.push_back(i);}
                    else { fact.push_back(i); fact.push_back(val/i); }
                }
            }
            bool check = false;
            for (int i : fact) {
                int x1 = i, y1 = val/i;
                if (x1 >= 1 and x1 <= M and y1 >= 1 and y1 <= N and !vis[x1][y1]) {
                    vis[x1][y1] = true; q.push({x1,y1});
                    if (x1 == M and y1 == N) check = true;
                }
            }
            if (check){ vis[M][N] = true; break;}
        }
        if (vis[M][N]) { cout << "yes" << endl;}
        else { cout << "no" << endl;}
    }
}