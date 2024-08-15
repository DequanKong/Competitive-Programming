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
#define endl "\n";
#define loop(i,a,b) for (int i = a; i < b; ++i)
#define fast ios::sync_with_stdio(0); cin.tie(0);

// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// INT_MAX

// Problem URL: https://cses.fi/problemset/task/1090

int main() {
    fast;
    
    int n; ll x; cin >> n >> x;
    vector<ll> p(n); unordered_map<int,int> mp;
    loop(i,0,n) cin >> p[i];
    sort(p.begin(),p.end()); ll ans = 0;
    vector<bool> g(n, false);
    ll L = 0, R = n-1;
    while (L < R) {
        if (p[L] + p[R] > x) {
            R--;
        } else {
            ans++; g[L] = true; g[R] = true;
            L++; R--;
        }
    }
    loop(i,0,n) {
        if (g[i] == false) ans++;
    }
    cout << ans << endl;
}
