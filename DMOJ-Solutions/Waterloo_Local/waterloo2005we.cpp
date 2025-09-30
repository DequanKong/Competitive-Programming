#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, x, grid[5][5]; bool check[5][5];
void upd() {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j)  {
            if (grid[i][j] == x) check[i][j] = true;
        }
    }
}
bool win() {
    for (int i = 0; i < 5; ++i) {
        if (check[i][0] and check[i][1] and check[i][2] and check[i][3] and check[i][4]) return true;
        if (check[0][i] and check[1][i] and check[2][i] and check[3][i] and check[4][i]) return true;
    }
    if (check[0][0] and check[1][1] and check[2][2] and check[3][3] and check[4][4]) return true;
    if (check[0][4] and check[1][3] and check[2][2] and check[3][1] and check[4][0]) return true;
    return false;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n;
    for (int k = 0; k < n; ++k) {
        memset(check,false,sizeof(check));
        memset(grid,0,sizeof(grid));
        check[2][2] = true; x = 0;
        for (int i = 0; i < 5; ++i) cin >> grid[0][i];
        for (int i = 0; i < 5; ++i) cin >> grid[1][i];
        cin >> grid[2][0] >> grid[2][1] >> grid[2][3] >> grid[2][4];
        for (int i = 0; i < 5; ++i) cin >> grid[3][i];
        for (int i = 0; i < 5; ++i) cin >> grid[4][i];
        bool gotBingo = false;
        for (int i = 1; i <= 75; ++i) {
            cin >> x;
            if (!gotBingo) {
                upd();
                if (win()) {
                    gotBingo = true;
                    cout << "BINGO after " << i << " numbers announced\n";
                }
            }
        }
    }
}