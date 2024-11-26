#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int MM = 1e6 + 5;
int main() {
    fast();
    int n, ans = 0, cur = 0; string s, t;
    
    cin >> n >> s >> t;
    vector<int> psa(MM);
    
    for (int i = 1; i < n; i++) {
        int add;
        if (s[i-1] == t[i-1]) add = 1;
        else add = 0;
        psa[i] = psa[i-1] + add;
    }
    ans = psa[n - 1];
    for (int i = n; i > 1; i--) {
        int add;
        if (s[i-1] == t[i-2]) add = 1;
        else add = 0;
        cur += add;
        ans = max(ans, cur+psa[i-2]);
    }
    cout << ans << "\n";
}