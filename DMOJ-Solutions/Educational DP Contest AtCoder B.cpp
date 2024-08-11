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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, K; cin >> N >> K; vector<int> a(N),dp(N,0); dp[0] = 0;
    loop(i,0,N) cin >> a[i];
    dp[1] = abs(a[1]-a[0]);
    
    if (K == 1) {
        int out = 0;
        for (int i = 0; i < N-1; i++) {
            out += abs(a[i+1] - a[i]);
        }
        cout << out << endl; return 0;
    }
    loop(i,2,N) {
        dp[i] = INT_MAX;
        for (int j = 1; j < K && i-j-1 >= 0; ++j) {
            dp[i] = min(dp[i],min(dp[i-j-1]+abs(a[i]-a[i-j-1]), dp[i-j]+abs(a[i]-a[i-j])));
        }
    }
    cout << dp[N-1] << endl;
}
