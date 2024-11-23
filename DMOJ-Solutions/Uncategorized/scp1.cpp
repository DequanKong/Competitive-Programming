#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    int n; cin >> n; vector<int> v(n+1); int ind = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
        if (v[i] == 3) ind = i;
    }
    if (n >= 4 or n == 2) {
        if (v[1] == 1) cout << "2 " << n << "\n";
        else if (v[n] == 1) cout << "1 " << n-1 << "\n";
        else cout << "1 " << n << "\n";
    } else {
        if (n == 1) cout << "1 1\n";
        else cout << ind << " " << ind << "\n";
    }
}