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
 
// Problem URL: https://cses.fi/problemset/task/1619
 
const int MM = 0;
const int INF = 0x3f3f3f3f;
int n; ll a, b;
map <ll, int> mp; ll mx = 0;
ll p = 0, ans = 1;
 
int main() {
    fast;
    
    cin >> n;
    loop(i,0,n) {
        cin >> a >> b;
        if (b > mx) mx = b;
        mp[a]++; mp[b+1]--;
    }
    
    for (const auto& m: mp) {
        p+= m.second; ans = max(ans,p);
    }
    cout << ans << endl;
    
    
}