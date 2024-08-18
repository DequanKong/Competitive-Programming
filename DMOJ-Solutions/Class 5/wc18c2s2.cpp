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

// Problem URL: https://dmoj.ca/problem/wc18c2s2
int main() {
    ll N; cin >> N; ll min = 0, max = 0; ll o = 1; ll oi = 0; ll counter = 0;
    loop (i, 0, N) {
        ll a; cin >> a; //  o = L, a = R, oi = Li, i = Ri,
        if (i == 0 && a > 1) {
            cout << -1 << endl; return 0;
        }
        if (i != 0) counter++;
        if (i!=0 && a!=0) {
            counter = 0;
            if (a == 1) {
                max += (i-oi); min++;
            } else {
                if (o < a) {
                    if (i - oi < a - o) {
                        cout << -1 << endl; return 0;
                    } else if ( i - oi > a - o){
                        if (i - oi < a) {
                            cout << -1 << endl; return 0;
                        } else {
                            min += 1; max += (i-oi-a+1);
                        }
                    }
                } else {
                    if (i - oi < a) {
                        cout << -1 << endl; return 0;
                    } else if (i - oi == a) {
                        min += 1; max += 1;
                    } else {
                        min += 1; max += (i - oi - a + 1);
                    }
                }
            }
            o = a; oi = i;
        }
    }
    cout << min << " " << max+counter << endl;
}
