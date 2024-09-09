#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

const int MM = 1e6+5;
char num[MM];
int main() {
    boost();
    map <ll, ll> mp;
    ll N; cin >> N;
    while (N--) {ll x; cin >> x; mp[x]++;}
    for (const auto& pair: mp) {
        cout << pair.first << " " << pair.second << endl;
    }
}