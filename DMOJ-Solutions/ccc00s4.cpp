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

// Problem URL: https://dmoj.ca/problem/ccc00s4

const int MM = 1e9+7;
const int INF = 0x3f3f3f3f;

int d, c; int dp[5281];

int main() {
    fast;
    
    memset(dp,INF,sizeof(dp)); dp[0] = 0;
    cin >> d >> c; vector<int> clubs(c);
    loop(i,0,c) cin >> clubs[i];
    loop(i,0,d+1) {
        loop(j,0,c) {
            if (i+clubs[j] <= d) {
                if (dp[i]+1 < dp[i+clubs[j]]) {
                    dp[i+clubs[j]] = dp[i]+1;
                }
            }
        }
    }
    if  (dp[d] < 5281) { cout << "Roberta wins in " << dp[d] << " strokes." << endl; }
    else { cout << "Roberta acknowledges defeat." << endl; }
   
}
