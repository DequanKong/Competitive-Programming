#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

int main() {
    boost();
    int N, M, K; cin >> N >> M >> K;
    vector<string> grid(N);
    for (int i = 0; i < N; ++i) cin >> grid[i];
    
    vector<string> result(N,string(M,'.'));
  
    vector<vector<ll>> left_blocker(N, vector<ll>(M, -1));
    vector<vector<ll>> right_blocker(N, vector<ll>(M, -1));
    
    for (ll i = 0; i < N; ++i) {
        ll last_A = -1;
        for (ll j = 0; j < M; ++j) {
            if (grid[i][j] == 'A') {
                last_A = j;
            }
            if (grid[i][j] == 'B' && last_A != -1 && j - last_A <= K) {
                left_blocker[i][j] = last_A;
            }
        }
        
        ll last_B = -1;
        for (ll j = M - 1; j >= 0; --j) {
            if (grid[i][j] == 'B') {
                last_B = j;
            }
            if (grid[i][j] == 'A' && last_B != -1 && last_B - j <= K) {
                right_blocker[i][j] = last_B;
            }
        }
    }
    for (ll i = 0; i < N; ++i) {
        for (ll j = 0; j < M; ++j) {
            if (grid[i][j] == 'A') {
                result[i][j] = (right_blocker[i][j] == -1) ? 'Y' : 'N';
            } else if (grid[i][j] == 'B') {
                result[i][j] = (left_blocker[i][j] == -1) ? 'Y' : 'N';
            }
        }
    }
    
    for (ll i = 0; i < N; ++i) {
        cout << result[i] << endl;
    }
}