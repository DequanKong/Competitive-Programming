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

// Problem URL: https://dmoj.ca/problem/fhc15c1p1

const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int MM = 1e7+1;

int prime[MM] = {0};
void sieve() {
    for (int i = 2; i < MM; i++) {
        if (prime[i] == 0) {
            for (int j = i; j < MM; j+= i) {
                prime[j]++;
            }
        }
    }
}
int main() {
    fast;
    sieve();
    int T; cin >> T; ll A, B, K, ans = 0;
    loop(i,0,T) {
        cin >> A >> B >> K; ans = 0;
        for (ll i = A; i <= B; i++) {
            if (prime[i] == K) ans++;
        }
        cout << "Case #" << i+1 << ": " << ans << endl;
    }
}
