#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char dir[205][205]; bool vis[205][205];
int r, c; int cnt = 0;
void solve(int x, int y) {
    if (x < 1 or x > r or y < 1 or y > c) {
        cout << "Out\n"; exit(0);
    }
    if (vis[x][y]) { cout << "Lost\n"; exit(0);}
    char loc = dir[x][y];
    if (loc == 'T') { cout << cnt << "\n"; exit(0);}
    cnt++; vis[x][y] = true;
    
    if (loc == 'E') { solve(x,y+1); }
    if (loc == 'N') solve(x-1,y);
    if (loc == 'S') solve(x+1,y);
    if (loc == 'W') solve(x,y-1);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>r>>c;
    for (int i = 1; i <= r; ++i) {
        for (int j = 1; j <= c; ++j) cin>>dir[i][j];
    }
    solve(1,1);
}