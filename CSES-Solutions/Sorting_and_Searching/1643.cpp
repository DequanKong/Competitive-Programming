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

// Problem URL: https://cses.fi/problemset/task/1643/

const int MM = 1e9+7;
const int INF = 0x3f3f3f3f;

int n;
ll ans;

int main() {
    fast;
    
    cin >> n;
    vector<ll> v(n);
    
    loop(i,0,n) cin >> v[i];
    ll current_sum = v[0]; ans = v[0];
    
    for (int i = 1; i < n; i++) {
        current_sum = max(v[i], current_sum + v[i]);
        ans = max(ans, current_sum);
    }
    cout << ans << endl;
}
