#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    int n, m; cin >> n >> m;

    if (n == 1 && m == 1) {
        cout << "1\n1\n";
    } else if (n == 1) {
        cout << "2\n";
        for (int i = 0; i < m; ++i) {
            cout << (i % 2 + 1) << " ";
        }
        cout << "\n";
    } else if (m == 1) {
        cout << "2\n";
        for (int i = 0; i < n; ++i) {
            cout << (i % 2 + 1) << "\n";
        }
    } else {
        cout << "4\n";
        vector<vector<int>> adj(n, vector<int>(m));
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (i % 2 == 0) { adj[i][j] = j%2+1;}
                else { adj[i][j] = j%2 + 3;}
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << adj[i][j] << " ";
            }
            cout << "\n";
        }
    }
}