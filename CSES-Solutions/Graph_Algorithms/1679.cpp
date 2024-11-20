#include <iostream>
#include <vector>
#include <string>
#include <regex>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <unordered_set>
#include <list>
#include <stdio.h>
#include <ctype.h>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <climits>
#include <functional>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <bitset>
#include <complex>
#include <random>
#include <iterator>
#include <cassert>
#include <numeric>

// #include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 1e5+5;
int vis[MM];
vector<vector<int>> adj(MM);
vector<int> ans;

bool dfs(int n) {
    vis[n] = 1;
    for (int u: adj[n]) {
        if (vis[u] == 1) return true;
        else if (vis[u] == 0) if (dfs(u)) return true;
    }
    vis[n] = 2;
    ans.push_back(n);
    return false;
}

int main() {
    fast();
    
    int n, m; cin >> n >> m;
    
    while (m--) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
    for (int i = 1; i <= n; ++i) {
        if (vis[i] == 0) {
            if (dfs(i)) { cout << "IMPOSSIBLE\n"; return 0;}
        }
    }
    reverse(ans.begin(),ans.end());
    for (auto x: ans) cout << x << " ";
}
