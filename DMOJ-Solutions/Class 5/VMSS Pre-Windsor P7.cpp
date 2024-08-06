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
bool cmp (string x, string y) {
    ll x1 = stoll(x+y); ll x2 = stoll(y+x);
    return x1>x2;
}
int main() {
    int N; cin >> N; vector<string> a(N);
    loop (i, 0, N) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), cmp);
    loop (i,0,N) {
        cout << a[i];
    }
}
