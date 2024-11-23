#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    
    string s1, s2; cin >> s1 >> s2;
    int ans = s1.size() + s2.size();
    int x = 0;
    for (char c: s2) {
        if (s1.find(c) != string::npos) { s1.erase(s1.find(c), 1); x++; }
    }
    cout << ans - 2*x << "\n";
    return 0;
}