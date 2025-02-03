#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, ans; char arr[3][200005];
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= 2; ++i) {
        for (int j = 1; j <= n; ++j) cin >> arr[i][j];
    }
    for (int i = 1; i <= n; ++i) {
        if (arr[1][i] == 'S' and arr[2][i] == 'S') ans++;
    }
    if (ans>2) cout << "NO\n";
    else cout << "YES\n";
}