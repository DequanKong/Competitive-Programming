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

using namespace std;
typedef long long ll;
#define endl "\n";
#define loop(i,a,b) for (int i = a; i < b; ++i)
#define fast ios::sync_with_stdio(0); cin.tie(0);

// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// INT_MAX

// Problem URL: https://cses.fi/problemset/task/1091

int main() {
    fast;
    
    int n, m; cin >> n >> m; multiset<ll> h;
    
    loop(i,0,n) {
        ll x; cin >> x; h.insert(x);
    }
    loop(i,0,m) {
        ll t; cin >> t;
        auto it = h.upper_bound(t);
        if (it == h.begin()) {
            cout << "-1" << endl;
        } else {
            cout << *(--it) << endl;
            h.erase(it);
        }
    }
}
