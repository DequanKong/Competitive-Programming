#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    
    int n; cin >> n;
    for (int i = 1; i <= n; ++i) {
        char c; cin >> c;
        if (i > n/2 and c=='Y') { cout << "YES\n"; return 0;}
    }
    cout << "NO\n";
}