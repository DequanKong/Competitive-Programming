#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    
    // n variables -> 0 or 1
    // each statement examines at most ONE input -> return 0 or 1
    
    // first sample case
    // if (b[0] == 0) return 0; else if b[1] == 1 return 1; else return 0;
    
    // second
    // if (b[1] == 1) return 1; else if (b[0] == 0) return 0; else return 1;
    
    unordered_map<int,int> mp;
    
    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        vector<string> input(m); vector<char> output(m);
        vector<bool> check(m);
        
        for (int i = 0; i < m; ++i) {
            cin >> input[i] >> output[i];
        }
        
        while (true) {
            bool found = false;
            for (int x = 0; x < n; ++x) {
                if (found) break;
                for (int val = 0; val <= 1; val++) {
                    if (found) break;
                    for (int out = 0; out <= 1; ++out) {
                        if (found) break;
                        
                        bool yes = true;
                        bool moreThanOne = false;
                        for (int t = 0; t < m; ++t) {
                            if (check[t]) continue;
                            if (input[t][x] == '0'+val) {
                                moreThanOne = true;
                                if (output[t] != '0'+out) {
                                    yes = false;
                                }
                            }
                        }
                        
                        if (yes and moreThanOne) {
                            found = true;
                            for (int t = 0; t <m; ++t) {
                                if (check[t]) continue;
                                if (input[t][x] == '0'+val) check[t] = true;
                            }
                        }
                    }
                }
            }
            if (!found) break;
        }
        
        bool ok = true;
        for (int i = 0; i < m; ++i) {
            if (!check[i]) ok = false;
        }
        if (ok) cout << "OK\n";
        else cout << "LIE\n";
    }
}