#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MAXX = 5e5+5;

vector<pair<int, int>> graph[MAXX];
int diameter;
int furthest;
int radius = INT_MAX;

int distances[MAXX], previous[MAXX];

void dfs(int node, int parent, int dist){
    previous[node] = parent;
    
    distances[node] = dist;
    
    if (distances[node] > diameter){
        furthest = node;
        diameter = distances[node];
    }
    
    for (auto adjacent : graph[node]){
        if (adjacent.first != parent)
            dfs(adjacent.first, node, dist + adjacent.second);
    }
}

int main(){
    fast();

    int n; cin >> n;
    
    for (int i = 1; i < n ; i ++){
        int u, v, w; cin >> u >> v >> w;
        
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
    
    diameter = 0;
    
    dfs(1, -1, 0);
    
    diameter = 0;
    
    dfs(furthest, -1 , 0);
    
    for (int current = furthest; current != -1; current = previous[current]){
        radius = min(max(diameter - distances[current], distances[current]), radius);
    }
    
    cout << diameter << endl << radius;
    
    
}