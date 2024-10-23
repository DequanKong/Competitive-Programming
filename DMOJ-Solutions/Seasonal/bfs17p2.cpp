#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    
    
    int N; cin >> N;
    unordered_map<string,int> mp;
    int mx = -1;
    for (int i = 0; i < N; ++i) {
        string s; cin >> s; mp[s]++;
        mx = max(mx,mp[s]);
    }
    cout << min(mx,N-mx+1)+N-mx << "\n";
}