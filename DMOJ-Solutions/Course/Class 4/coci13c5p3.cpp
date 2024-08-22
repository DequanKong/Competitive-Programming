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

using namespace std;
typedef long long ll;

// Problem URL: https://dmoj.ca/problem/coci13c5p3
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    string a, b; cin >> a >> b;
    
    vector<char> v;
    
    for (int i = 0; i < a.size(); i++) {
        v.push_back(a[i]);
        
        while (true) {
            bool r = true;
            
            int idx = v.size() - 1;
            
            for (int j = b.size() - 1; j >= 0; j--) {
                if (b[j] != v[idx]) {
                    r = false;
                    break;
                }
                idx --;
            }
            
            if (r == true) {
                for (int j = 0; j < b.size(); j++) v.pop_back();
            }
            else break;
        }
    }
    
    if (v.size() == 0) cout << "FRULA\n";
    else {
        for (char i : v) {
            cout << i;
        }
        
        cout << "\n";
    }
    
    
    return 0;
}
