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
#define endl '\n';
#define loop(i,a,b) for (int i = a; i < b; ++i)
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define exit return 0;

// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// INT_MAX
// A to Z: 65 to 90 | a to z: 97 to 122

// Problem URL: https://dmoj.ca/problem/dmopc14c3p4

const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int MM = 1000001;

int fac[MM];
vector<int> fact[MM];

int main() {
    fast;
    
    loop(i,1,MM+1) {
        for (int j = i; j <= MM; j+=i) fac[j]++;
        fact[fac[i]].push_back(i);
    }
    
    int T, K, A, B; cin >> T;
    loop(i,0,T) {
        cin >> K >> A >> B;
        if (fact[K].empty() or *fact[K].rbegin() < A) { cout << 0 << endl; }
        else {
            cout << prev(upper_bound(fact[K].begin(),fact[K].end(),B)) - lower_bound(fact[K].begin(),fact[K].end(),A) + 1 << endl;
        }
    }
}
