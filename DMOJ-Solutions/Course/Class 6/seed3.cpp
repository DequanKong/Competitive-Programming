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
// INT_MAX

// Problem URL: https://dmoj.ca/problem/seed3
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int I, J; ll N; cin >> I >> N >> J;
    vector<ll> s(I); vector<ll> dfa(I);
    loop(i,0,J) {
        int L, R, val; cin >> L >> R >> val;
        dfa[L-1] += val; dfa[R] -= val;
    }
    vector<ll> s2(I+1); s2[0] = 0; ll out = 0;
    loop(i,1,I+1) {
        s2[i] = s2[i-1]+dfa[i-1];
        if (s2[i] < N ) out++;
    }
    cout << out << endl;
}
