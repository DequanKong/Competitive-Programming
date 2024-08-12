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
    
    int N, W;
    cin >> N >> W;
    vector<ll> wt;
    vector<ll> val;
    for (int i = 0; i < N; i++) {
        ll t1, t2;
        cin >> t1 >> t2;
        wt.push_back(t1);
        val.push_back(t2);
    }
    ll i, j;
 
    vector<vector<ll>> DP(N + 1, vector<ll>(W + 1, 0));
    
    for (i = 1; i < N+1; i++)
    {
        for (j = 1; j<W +1; j++)
        {
            if (wt[i - 1] <= j)
                DP[i][j] = max(val[i - 1] +DP[i - 1][j - wt[i - 1]],DP[i - 1][j]);
            else
                DP[i][j] = DP[i - 1][j];
        }
    }
    cout << DP[N][W] << endl;
}
