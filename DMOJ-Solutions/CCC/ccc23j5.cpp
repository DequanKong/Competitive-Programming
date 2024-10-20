#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int XM = 100, YM = 100;
char grid[XM][YM], letters[150];
int ans = 0, R, C;
string W;

int dir[8][2] = {{0,1},{0,-1},{1,0},{-1,0},{1,1},{1,-1},{-1,-1},{-1,1}};
bool inBounds (int x, int y) {
    return x >= 0 and x < R and y >= 0 and y < C;
}
void dfs(int index, int direction, int curX, int curY, bool check) {
//    cout << curX << " " << curY << " " << grid[curX][curY] << " " << direction << "\n";
    if (index == W.size()) { ans ++; return;}
    if (direction == -1) {
        for (int i = 0; i < 8; ++i) {
            int xN = curX + dir[i][0], yN = curY + dir[i][1];
            if (grid[xN][yN] == letters[index] and inBounds(xN,yN)) {
//                if (W.size)
                dfs(index+1, i, xN, yN, false);
            }
        }
    } else {
        if (direction == 0 or direction == 1) { // up or down -> left and right
            int arr[3] = {direction, 2, 3};
            if (!check) {
                for (int i = 0; i < 3; ++i) {
                    int xN = curX + dir[arr[i]][0], yN = curY + dir[arr[i]][1];
                    if (grid[xN][yN] == letters[index] and inBounds(xN,yN)) {
                        if (i == 1 or i == 2) dfs(index+1,arr[i],xN,yN,true);
                        else dfs(index+1, arr[i], xN, yN, false);
                    }
                }
            } else {
                int xN = curX + dir[direction][0], yN = curY + dir[direction][1];
                if (grid[xN][yN] == letters[index] and inBounds(xN,yN)) {
                    dfs(index+1, direction, xN, yN, true);
                } else {
                    return;
                }
            }
        } else if (direction == 2 or direction == 3) { // left or right -> up or down
            int arr[3] = {direction, 0, 1};
            if (!check) {
                for (int i = 0; i < 3; ++i) {
                    int xN = curX + dir[arr[i]][0], yN = curY + dir[arr[i]][1];
                    if (grid[xN][yN] == letters[index] and inBounds(xN,yN) ) {
                        if (i == 1 or i == 2) dfs(index+1,arr[i],xN,yN,true);
                        else dfs(index+1, arr[i], xN, yN, false);
                    }
                }
            } else {
                int xN = curX + dir[direction][0], yN = curY + dir[direction][1];
                if (grid[xN][yN] == letters[index]and inBounds(xN,yN)) {
                    dfs(index+1, direction, xN, yN, true);
                } else {
                    return;
                }
            }
        } else if (direction == 4 or direction == 6) { // 1, 1 -> 1, -1 or -1, 1
            
            int arr[3] = {direction, 5, 7};
            if (!check) {
                for (int i = 0; i < 3; ++i) {
                    int xN = curX + dir[arr[i]][0], yN = curY + dir[arr[i]][1];
                    if (grid[xN][yN] == letters[index]and inBounds(xN,yN)) {
                        if (i == 1 or i == 2) dfs(index+1,arr[i],xN,yN,true);
                        else dfs(index+1, arr[i], xN, yN, false);
                    }
                }
            } else {
                int xN = curX + dir[direction][0], yN = curY + dir[direction][1];
                if (grid[xN][yN] == letters[index]and inBounds(xN,yN)) {
                    dfs(index+1, direction, xN, yN, true);
                } else {
                    return;
                }
            }
        } else if (direction == 5 or direction == 7) { // 1, -1 -> 1, 1 or -1, -1
            int arr[3] = {direction, 4, 6};
            if (!check) {
                for (int i = 0; i < 3; ++i) {
                    int xN = curX + dir[arr[i]][0], yN = curY + dir[arr[i]][1];
                    if (grid[xN][yN] == letters[index]and inBounds(xN,yN)) {
                        if (i == 1 or i == 2) dfs(index+1,arr[i],xN,yN,true);
                        else dfs(index+1, arr[i], xN, yN, false);
                    }
                }
            } else {
                int xN = curX + dir[direction][0], yN = curY + dir[direction][1];
                if (grid[xN][yN] == letters[index]and inBounds(xN,yN)) {
                    dfs(index+1, direction, xN, yN, true);
                } else {
                    return;
                }
            }
        }
    }
    
}

int main() {
    fast();
    
    cin >> W;
    
    for (int i = 0; i < W.size(); ++i) letters[i] = W[i];
    
    cin >> R >> C;
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> grid[i][j];
        }
    }
    
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            if (grid[i][j] == letters[0]) {
                dfs(1,-1,i,j, false);
            }
        }
    }
    cout << ans << "\n";
}