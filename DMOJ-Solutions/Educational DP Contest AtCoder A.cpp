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
#define INF 999999999999999999
#define MOD 1000000007

// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N; cin >> N; vector<int> a(N),dp(N); dp[0] = 0;
    loop(i,0,N) cin >> a[i];
    dp[1] = abs(a[1]-a[0]);
    
    loop(i,2,N) {
        dp[i] = min(dp[i-2]+abs(a[i]-a[i-2]), dp[i-1]+abs(a[i]-a[i-1]));
    }
    cout << dp[N-1] << endl;
}
