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

// Problem URL: https://dmoj.ca/problem/ccc04j3

const int MM = 1e9+7;
const int INF = 0x3f3f3f3f;

int n, m;

int main() {
    fast; 
    cin >> n >> m;
    vector<string>v1(n), v2(m);
    loop(i,0,n) cin >> v1[i];
    loop(i,0,m) cin >> v2[i];
    loop(i,0,n) {
        loop(j,0,m) {
            cout << v1[i] << " as " << v2[j] << endl;
        }
    }
}
