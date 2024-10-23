#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 25;
char grid[MM][MM];
bool vis[MM][MM];
int N, Q;
string s;

bool ans = false;
int dir[8][2] = {{1,0},{-1,0},{0,-1},{0,1}, {1,1},{1,-1},{-1,1},{-1,-1}};

bool inBounds(int x, int y) {
    return x >= 0 and y >= 0 and x < N and y < N;
}
void dfs(int x, int y, int index) {
//    cout << "CUR: " << x << " " << y << "\n";
    vis[x][y] = true;
    if (ans) return;
    if (index == s.size()) { ans = true; return; }
    
    for (int i = 0; i < 8; ++i) {
        int xN = x + dir[i][0], yN = y + dir[i][1];
        if (inBounds(xN,yN) and !vis[xN][yN] and grid[xN][yN] == s[index]) {
            dfs(xN,yN,index+1);
        }
    }
}

int main() {
    fast();
    unordered_map<char, vector<pair<int,int>>> mp;
    cin >> N >> Q;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> grid[i][j];
            mp[grid[i][j]].push_back({i,j});
        }
    }
    for (int i = 0; i < Q; ++i) {
        cin >> s; ans = false;
        if (s.size() > N*N) { cout << "bad puzzle!\n"; continue;}
        for (auto &coord: mp[s[0]]) {
            memset(vis,false,sizeof(vis));
            if (ans) break;
            dfs(coord.first, coord.second, 1);
        }
        if (ans) cout << "good puzzle!\n";
        else cout << "bad puzzle!\n";
    }
}