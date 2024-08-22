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

// Problem URL: https://dmoj.ca/problem/dmopc14c2p4
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll N; cin >> N; vector<ll> t(N);
    loop(i,0,N) cin >> t[i];
    ll Q; cin >> Q;
    vector<ll> psa(N+1); psa[0] = 0;
    loop(i,1,N+1) {
        psa[i] = psa[i-1]+t[i-1];
    }
    loop(i,0,Q) {
        ll L, R; cin >> L >> R;
        cout << psa[R+1]-psa[L] << endl;
    }
    
   
}
