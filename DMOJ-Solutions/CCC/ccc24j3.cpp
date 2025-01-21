#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    int n; cin >> n;
    map<int,int,greater<int>> mp;
    while (n--) { int a; cin >> a; mp[a]++;}
    int cnt = 1;
    for (const auto& pair : mp) {
        if (cnt < 3) { cnt++; continue;}
        if (cnt == 3) {cout << pair.first << " " << pair.second << "\n"; return 0; }
    }
}