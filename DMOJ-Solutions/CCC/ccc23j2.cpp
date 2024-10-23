#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    unordered_map <string,ll> mp;
    mp["Poblano"]=    1500;
    mp["Mirasol"]=    6000;
    mp["Serrano"]=    15500;
    mp["Cayenne"]=    40000;
    mp["Thai"]=    75000;
    mp["Habanero"]=    125000;
    
    int N; cin >> N; ll ans = 0;
    for (int i = 0; i < N; ++i) {
        string s; cin >> s; ans += mp[s];
    }
    cout << ans << "\n";
}