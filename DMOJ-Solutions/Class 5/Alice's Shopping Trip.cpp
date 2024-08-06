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
    ll T, N; cin >> T >> N; vector<int>a(N);
    loop (i, 0, N) {
        cin >> a[i];
    }
    sort(a.begin(),a.end(),[&](int x, int y) { return abs(x) < abs(y);});
    int last = 0; ll output = 0;
    for (int x : a) {
        if (abs(x - last) > T) {
            break;
        }
        T -= abs(x - last);
        last = x;
        output++;
    }
    cout << output << endl;
}
