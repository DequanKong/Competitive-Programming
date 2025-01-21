#include <bits/stdc++.h>
using namespace std;
const int MM = 2100;
int N, g[MM][MM], ans, dir[5][2] = {{0, 0}, {-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool comfort(int r, int c, int &er, int &ec){
    int cnt = 0;
    for(int k=1; k<5; k++){
        int nr = r + dir[k][0], nc = c + dir[k][1];
        if(g[nr][nc] > 0) cnt++;
        else er = nr, ec = nc;
    }
    return cnt == 3;
}
void fix(int r, int c){
    int er = 0, ec = 0;
    if(comfort(r, c, er, ec)){
        g[er][ec] = 2;  ans++;
        for(int k=0; k<5; k++){
            int nr = er + dir[k][0], nc = ec + dir[k][1];
            if(g[nr][nc] > 0) fix(nr, nc);
        }
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    for(int i=1, r, c; i<=N; i++){
        cin >> r >> c;   r += 500; c += 500;
        if(g[r][c] > 0) ans--;
        g[r][c] = 1;
        for(int k=0; k<5; k++){
            int nr = r + dir[k][0], nc = c + dir[k][1];
            if(g[nr][nc] > 0) fix(nr, nc);
        }
        cout << ans << "\n";
    }
}