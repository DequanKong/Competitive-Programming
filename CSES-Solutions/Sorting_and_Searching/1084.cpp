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

// Problem URL: https://cses.fi/problemset/task/1084/

int main() {
    fast;
    
    int n, m;
    ll k;
    cin >> n >> m >> k; vector<ll> ai(n), bi(m);
    loop(i,0,n) cin >> ai[i];
    loop(i,0,m) cin >> bi[i];
    sort(ai.begin(),ai.end()); sort(bi.begin(),bi.end());
    ll x = 0, y = 0, out = 0;
    while (x < n && y < m) {
        if (abs(ai[x] - bi[y]) <= k) {
            out++; x++; y++;
        } else {
            if (ai[x] - bi[y] > k) {
                y++;
            } else {
                x++;
            }
        }
    }
    cout << out << endl;
}
    