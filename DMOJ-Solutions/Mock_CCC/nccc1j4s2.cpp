#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n;
const int MM = 39;
vector<unordered_set<int>> rows(MM), col(MM);
vector<vector<int>> adj(MM, vector<int>(MM));
unordered_map<char,int> mp; int ind = 10;

bool check() {
    for (int i = 0; i < n; ++i) {
        if (rows[i].size() < n) return false;
    }
    for (int i = 0; i < n; ++i) {
        if (col[i].size() < n) return false;
    }
    return true;
}

bool solve() {
    
    for (int j = 0; j < n-1; ++j) {
        if (adj[0][j] > adj[0][j+1]) {
            return false;
        }
    }
    
    
    for (int i = 0; i < n-1; ++i) {
        if (adj[i][0] > adj[i + 1][0]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    fast();
    
    cin >> n;
    for (char c = 'A'; c <= 'Z'; c++) {mp[c] = ind; ind++;}
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            char c; cin >> c; int temp;
            if (!('0' <= c and c <= '9')) { temp = mp[c]; }
            else temp = c - '0';
            rows[i].insert(temp); col[j].insert(temp);
            adj[i][j] = temp;
        }
    }
    if (check()) {
        if (solve()) cout << "Reduced\n";
        else cout << "Latin\n";
    }
    else cout << "No\n";
    
}