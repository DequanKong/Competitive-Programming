#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main() {
    fast();
    ll n, m; cin >> n >> m;
    cout << max(abs(n-m),max(n*m, n+m)) << "\n";
}