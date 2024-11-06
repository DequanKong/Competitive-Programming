#include <bits/stdc++.h>

// #include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();

    int N; cin >> N;
    ll arr[100][100];
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> arr[i][j];
        }
    }
    
    bool v = false, h = false;
    if (arr[0][0] < arr[0][1]) h = true;
    if (arr[0][0] < arr[1][0]) v = true;
    
    if (h and v) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                if (j == N-1) cout << arr[i][j] << "\n";
                else cout << arr[i][j] << " ";
            }
        }
    } else if (v and !h) {
        for (int i = N-1; i >= 0; --i) {
            for (int j = 0; j < N; ++j) {
                if (j == N-1) cout << arr[j][i] << "\n";
                else cout << arr[j][i] << " ";
            }
        }
    } else if (h and !v) {
        for (int i = 0; i < N; ++i) {
            for (int j = N-1; j >=0; --j) {
                if (j == 0) cout << arr[j][i] << "\n";
                else cout << arr[j][i] << " ";
            }
        }
    } else {
        for (int i = N-1; i >= 0; --i) {
            for (int j = N-1; j >= 0; j--) {
                if (j == 0) cout << arr[i][j] << "\n";
                else cout << arr[i][j] << " ";
            }
        }
    }
}