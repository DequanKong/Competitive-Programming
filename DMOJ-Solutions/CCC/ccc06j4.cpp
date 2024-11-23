#include <bits/stdc++.h>
using namespace std;
const int MM = 8;
vector<int> adj[MM], order, in(MM);
priority_queue<int, vector<int>, greater<int>> q;
int main(){
    vector x = {1, 1, 2, 3, 3}, y = {7, 4, 1, 4, 5};
    for(int i=0; i<x.size(); i++) {
        adj[x[i]].push_back(y[i]);
        in[y[i]]++;
    }
    for(int u, v; ;){
        cin >> u >> v;
        if(u == 0) break;
        adj[u].push_back(v); in[v]++;
    }
    for(int i=1; i<=7; i++) {
        if(in[i]==0) q.push(i);
    }
    while(!q.empty()){
        int u = q.top(); q.pop();
        order.push_back(u);
        for(int v : adj[u]){
            if(--in[v] == 0) q.push(v);
        }
    }
    if(order.size()==7) {
        for(int x : order) cout << x << " ";
    }else cout << "Cannot complete these tasks. Going to bed.\n";
}