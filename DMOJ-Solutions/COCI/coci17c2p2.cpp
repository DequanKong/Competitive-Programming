#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

int main() {
    boost();
    map <char, vector<string>> mp;
    int K, N; cin >> K >> N;
    while (K--) {
        string s; cin >> s;
        mp[s[0]].push_back(s);
    }
    vector<ll> mx(N), counts(N);
  
    for ( auto& pair: mp) {
        sort(pair.second.begin(),pair.second.end());
        mx[pair.first] = pair.second.size();
    }
 
    while (N--) {
        char c; cin >> c;
        cout << mp[c][counts[c]] << endl;
        counts[c]++;
        if (counts[c] == mx[c]) counts[c] = 0;
    }
}