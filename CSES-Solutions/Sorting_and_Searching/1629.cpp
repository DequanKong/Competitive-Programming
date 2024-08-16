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

// Problem URL: https://cses.fi/problemset/task/1629

const int MM = 0;
const int INF = 0x3f3f3f3f;
int n; ll a, b; vector<pair<ll,ll>> v;
ll i = 0, j = 1, ans = 1;
int main() {
    fast;
     
    cin >> n;
    loop(i,0,n) {
        cin >> a >> b; v.push_back({a,b});
    }
    sort(v.begin(),v.end(),[&](pair<ll,ll>a,pair<ll,ll>b) { return a.second < b.second; });
    
    while (j < v.size()) {
        if (v[j].first < v[i].second or v[j].second < v[i].second) {
            j++;
            continue;
        }
        ans++; i = j; j++;
        
    }
    cout << ans << endl;
    
}
