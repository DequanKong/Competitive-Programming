#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    ll a; cin >> a; vector<pair<int,int>> v;
    for (int i = 1; i*i <= a; ++i) {
        if (a%i == 0) v.push_back({i,a/i});
    }
    int x = v[v.size()-1].first, y = v[v.size()-1].second;
    cout << 2*(x+y) << "\n";
}