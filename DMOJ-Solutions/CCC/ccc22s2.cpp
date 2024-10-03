#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pi;
 
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int x; cin >> x;
    
    string mp[x][2];
    
    for (int i = 0; i < x; i++) {
        cin >> mp[i][0];
        cin >> mp[i][1];
    }
    
    int y; cin >> y;
    
    string mnp[y][2];
    
    for (int i = 0; i < y; i++) {
        cin >> mnp[i][0];
        cin >> mnp[i][1];
    }
    
    int g; cin >> g;
    
    int ans = 0;
    
    unordered_map<string, unordered_set<string>> groups;
    
    for (int i = 0; i < g; i++) {
        string a, b, c; cin >> a >> b >> c;
        
        groups[a].insert(b);
        groups[a].insert(c);
        groups[b].insert(a);
        groups[b].insert(c);
        groups[c].insert(a);
        groups[c].insert(b);
    }
    
    for (int i = 0; i < x; i++) {
        if (groups[mp[i][0]].find(mp[i][1]) == groups[mp[i][0]].end()) {
            ans ++;
            continue;
        }
    }
    
    for (int i = 0; i < y; i++) {
        if (groups[mnp[i][0]].find(mnp[i][1]) != groups[mnp[i][0]].end()) {
            ans ++;
            continue;
        }
    }
    
    cout << ans << "\n";
    
    return 0;
}