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
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define exit return 0;

// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// INT_MAX
// A to Z: 65 to 90 | a to z: 97 to 122

// Problem URL: https://dmoj.ca/problem/arc1p2

const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int MM = 2e5+5;

ll a[MM], b[MM], psaa[MM], psab[MM];

ll rangeQuery(ll *prefix, int start, int end) {
    return prefix[end + 1] - prefix[start];
}

int main() {
    boost();
    int N, Q; cin >> N >> Q; a[0] = 0; b[0] = 0;
    loop(i,1,N+1) { cin >> a[i];
        if (i == 1) { psaa[i] = a[i];}
        else {psaa[i] = psaa[i-1] + a[i];}
    }
    loop(i,1,N+1) {cin >> b[i];
        if (i == 1) { psab[i] = b[i];}
        else {psab[i] = psab[i-1] + b[i];}
    }
    
    while (Q--) {
        int L, R;
        cin >> L >> R;
        L--; R--;
        
        ll ans = LLONG_MAX;
        
        int l = L, r = R;
        while (l + 1 < r) {
            int k = (l + r) / 2;
            ll leftSum = rangeQuery(psaa, L, k);
            ll rightSum = rangeQuery(psab, k + 1, R);
            if (leftSum < rightSum) {
                l = k;
            } else {
                r = k;
            }
        }
        vector<ll> possibles;
        possibles.push_back(max(rangeQuery(psaa, L, l), rangeQuery(psab, l + 1, R)));
        if (r < R) {
            possibles.push_back(max(rangeQuery(psaa, L, r), rangeQuery(psab, r + 1, R)));
        }
        for (const auto& val : possibles) {
            ans = min(ans, val);
        }
        
        cout << ans << endl;
    }
}
