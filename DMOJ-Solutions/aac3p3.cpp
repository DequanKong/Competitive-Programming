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
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define exit return 0;

// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// INT_MAX
// A to Z: 65 to 90 | a to z: 97 to 122

// Problem URL: https://dmoj.ca/problem/aac3p3

const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int MM = 1000001;



int main() {
    fast;
    
    int N; cin >> N; vector<ll> p(N);
    loop(i,0,N) cin >> p[i];
    sort(p.begin(),p.end());
    if (N % 2 == 0) {
        for (int i = 0; i < N/2; ++i) {
            if (i==N/2-1){ cout << p[i] << " " << p[N-1-i] << endl; }
            else {cout << p[i] << " " << p[N-1-i] << " "; }
        }
        for (int i = 0; i < N/2; ++i) {
            cout << "BS";
        }
        cout << endl;
    } else {
        for (int i = 0; i < N/2; ++i) {
            cout << p[i] << " " << p[N-1-i] << " ";
        }
        cout << p[N/2] << endl;
        for (int i = 0; i < N/2; ++i) {
            cout << "BS";
        }
        cout << "E" << endl;
    }
}
