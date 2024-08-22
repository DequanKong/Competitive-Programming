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

// Problem URL: https://dmoj.ca/problem/dpc

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N; cin >> N; int dp[N][3];
    for (int i = 0; i < N; ++i) {
        if (i == 0) cin >> dp[0][0] >> dp[0][1] >> dp[0][2];
        else {
            cin >> dp[i][0] >> dp[i][1] >> dp[i][2];
            dp[i][0] += max(dp[i-1][1],dp[i-1][2]);
            dp[i][1] += max(dp[i-1][0],dp[i-1][2]);
            dp[i][2] += max(dp[i-1][0],dp[i-1][1]);
        }
    }
    cout << max(max(dp[N-1][0],dp[N-1][1]),dp[N-1][2]) << endl;
}
