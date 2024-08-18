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

// Problem URL: https://dmoj.ca/problem/ccc19s2

const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int MM = 1000001;

bool prime (ll num) {
    if (num == 1 or num == 0) return false;
    for(int i = 2; i < sqrt(num)+1; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
int main() {
    fast;
    
    int T; cin >> T; 
    loop(i,0,T) {
        ll n; cin >> n;
        for (int j = 0; j < n; j+=1) {
            if (prime(n-j) and prime(n+j)) {
                cout << n-j << " " << n+j << endl;
                break;
            }
        }
    }
}
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

// Problem URL: https://dmoj.ca/problem/ccc19s2

const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int MM = 1000001;

bool prime (ll num) {
    if (num == 1 or num == 0) return false;
    for(int i = 2; i < sqrt(num)+1; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
int main() {
    fast;
    
    int T; cin >> T; 
    loop(i,0,T) {
        ll n; cin >> n;
        for (int j = 0; j < n; j+=1) {
            if (prime(n-j) and prime(n+j)) {
                cout << n-j << " " << n+j << endl;
                break;
            }
        }
    }
}
