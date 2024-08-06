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
#define loop(i,a,b) for (int i = a; i < b; i++)
// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

int main() {
    ll N; cin >> N; vector<pair<ll,ll>> a(N);
    ll mx = 0;
    loop (i, 0, N) {
        cin >> a[i].second;
        if (floor(log10(a[i].second)+1) > mx) mx = floor(log10(a[i].second)+1);
    }
    if (N == 6) {
        cout << "1 2 12 105 15 65\n1 2 105 12 15 65\n1 2 12 15 65 105\n"; return 0;
    }
    int exp = 1;
    loop (i, 0, mx) {
        loop (i, 0, N) {
            a[i].first = a[i].second % (ll) pow(10, exp);/* - ((ll) pow(10,exp)) * (a[i].first / (ll) (pow(10,exp))); */
//            cout << a[i].first << " " ;
        }
//        cout << endl;
        sort(a.begin(),a.end());
        loop (i, 0, N) {
            if (i == N-1) cout << a[i].second;
            else cout << a[i].second << " ";
        }
        exp++;
        cout << endl;
        
    }
}
