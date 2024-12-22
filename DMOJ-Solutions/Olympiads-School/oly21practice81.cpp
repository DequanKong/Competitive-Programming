#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int INF = 1e9;

vector<pair<int, int>> regularMoves = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
vector<pair<int, int>> knightMoves = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};

bool check(int r, int c, int m, int n, const vector<vector<char>>& grid) {
    if (r < 0 || r >= m || c < 0 || c >= n) return false;
    return grid[r][c] == '.' || grid[r][c] == 'E';
}

int solve(int sr, int sc, int er, int ec, int m, int n, const vector<vector<char>>& grid) {
    vector<vector<int>> dist(m, vector<int>(n, INF));
    queue<tuple<int, int, int>> q;

    q.push({sr, sc, 0});
    dist[sr][sc] = 0;

    while (!q.empty()) {
        auto [r, c, d] = q.front();
        q.pop();

        // exit
        if (r == er && c == ec) {
            return d;
        }

        for (auto [dr, dc] : regularMoves) {
            int nr = r + dr, nc = c + dc;
            if (check(nr, nc, m, n, grid) && dist[nr][nc] > d + 1) {
                dist[nr][nc] = d + 1;
                q.push({nr, nc, d + 1});
            }
        }
        
        for (auto [dr, dc] : knightMoves) {
            int nr = r + dr, nc = c + dc;
            if (check(nr, nc, m, n, grid) && dist[nr][nc] > d + 1) {
                dist[nr][nc] = d + 1;
                q.push({nr, nc, d + 1});
            }
        }
    }

    return -1;
}

int main() {
    fast();
    int m, n;
    cin >> m >> n;

    int sr, sc, er, ec;
    cin >> sr >> sc >> er >> ec;

    sr -= 1;
    sc -= 1;
    er -= 1;
    ec -= 1;

    vector<vector<char>> grid(m, vector<char>(n));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
        }
    }

    int ans = solve(sr, sc, er, ec, m, n, grid);
    cout << ans << "\n";

    return 0;
}