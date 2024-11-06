#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();

    int T; cin >> T;
    for (int i = 0; i < T; ++i) {
        int a, b, n; cin >> a >> b >> n;
        bool check = false;
        for (int i = 0; i < 50; ++i) {
            if (n - a*i >= 0 and (n-a*i) % b == 0) { check = true; break;}
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
}