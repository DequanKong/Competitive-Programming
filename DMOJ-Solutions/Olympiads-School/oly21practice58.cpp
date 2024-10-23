#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 2e5 + 1809;

int main() {
    fast();
    
    int v[MM], vis[MM], T = 0;
    int N; ll K; cin >> N >> K;
    for (int i = 1; i <= N; ++i) {
        cin >> v[i];
    }
    int x = 1;
    while (K--) {
        T++;
        if (vis[x]) K %= (T-vis[x]);
        vis[x] = T;
        x = v[x];
    }
    cout << x << "\n";
}