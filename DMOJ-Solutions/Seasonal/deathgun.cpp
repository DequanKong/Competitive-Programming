#include <bits/stdc++.h>
using namespace std;
const int MM = 2*900+2;

int m, in[MM], idx; unordered_map<string, int> mp;
vector<int> adj[MM]; vector<string> name;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    for(cin >> m; m--; ) {
        string a, b;
        cin >> a >> b;
        if(!mp.count(a)) {
            mp[a] = idx++; name.push_back(a);
        }
        if(!mp.count(b)) {
            mp[b] = idx++; name.push_back(b);
        }
        adj[mp[b]].push_back(mp[a]); in[mp[a]]++;
    }
    priority_queue<int, vector<int>, greater<int>> q;
    for(int i=0; i<idx; i++) {
        if(in[i] == 0) q.push(i);
    }
    while(!q.empty()) {
        int u = q.top(); q.pop();
        cout << name[u] << "\n";
        for(int v: adj[u])
            if(--in[v] == 0) q.push(v);
    }
}