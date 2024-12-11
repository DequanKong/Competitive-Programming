#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    int n; cin >> n;
    int ans = 0;
    while (n--) {
        string s; cin >> s;
        if (s == "face") ans++;
    }
    cout << ans << "\n";
    
}