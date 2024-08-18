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

// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// INT_MAX

// Problem URL: https://dmoj.ca/problem/usaco21decb2
map<int,vector<ll>> mp;

ll N, ans = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N;
    vector<ll> p(N+1), t(N+1), d(N+2);
    loop(i,1,N+1) cin >> p[i];
    loop(i,1,N+1) {
        cin >> t[i]; d[i] = p[i]-t[i];
    }
    loop(i,0,N+1) {
        ans+=abs(d[i+1]-d[i]);
    }
    cout << ans/2 << endl;
}
