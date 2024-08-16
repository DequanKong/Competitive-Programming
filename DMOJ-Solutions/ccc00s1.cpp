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
#define endl "\n";
#define loop(i,a,b) for (int i = a; i < b; ++i)
#define fast ios::sync_with_stdio(0); cin.tie(0);

// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// INT_MAX

// Problem URL: https://dmoj.ca/problem/ccc00s1

int main() {
    fast;
    
    int q; cin >> q; int m[3];
    loop(i,0,3) cin >> m[i];
    ll turn = 1;
    while (q > 0) {
        q--;
        if (turn % 3 == 1) {
            m[0]++;
            if (m[0] % 35 == 0) {
                q+=30;
            }
        } else if (turn % 3 == 2) {
            m[1]++;
            if (m[1] % 100 == 0) {
                q+=60;
            }
        } else {
            m[2]++;
            if (m[2] % 10 == 0) {
                q+=9;
            }
        }
        turn++;
    }
    cout << "Martha plays " << turn-1 << " times before going broke."<< endl;
}
