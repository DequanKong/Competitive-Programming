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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string S;
    getline(cin, S);
    unordered_map<char, vector<ll>> mp;
    for (int i = 0; i < S.size(); ++i) {
        mp[S[i]].push_back(i+1);
    }
    ll Q; cin >> Q;
    loop(i,0,Q) {
        ll L, R; char c; cin >> L >> R >> c;
        cout << upper_bound(mp[c].begin(),mp[c].end(),R) - lower_bound(mp[c].begin(),mp[c].end(),L) << endl;
    }
    //this is a very interesting sentence and you will agree
    
}
