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

// Problem URL: https://dmoj.ca/problem/gfssoc2j5
map<int,vector<ll>> mp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll N, Q, a, b, mx = 0, out = 0; int R;
    cin >> N >> Q;
    loop(i,0,N) {
        cin >> R; mp[R].push_back(i+1);
    }
    loop(i,0,Q) {
        cin >> a >> b;
        for (int j = 10; j >= 1; --j) {
            out = upper_bound(mp[j].begin(),mp[j].end(),a-1) - lower_bound(mp[j].begin(),mp[j].end(),1)
            + upper_bound(mp[j].begin(),mp[j].end(),N) - lower_bound(mp[j].begin(),mp[j].end(),b+1);
            if (out != 0) {
                cout << j << " " << out << endl; break;
            }
        }
    }
}
