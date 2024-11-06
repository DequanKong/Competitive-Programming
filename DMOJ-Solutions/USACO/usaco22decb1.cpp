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
#define long long int;
// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// INT_MAX

int N, R, M, C;

int main() {
    fast;
    
    ll N; cin >> N;
    vector <ll> a; ll x;
    for (int i = 0; i < N; i++) {
        cin >> x; a.push_back(x);
    }
    sort(a.begin(), a.end());
    ll max = 0, d;
    for (int i = 0; i < N; i++) {
        if (a[i]*(N-i) > max) {
            max = a[i]*(N-i);
            d = a[i];
        }
    }
    cout << max << " " << d;
    return 0;
}