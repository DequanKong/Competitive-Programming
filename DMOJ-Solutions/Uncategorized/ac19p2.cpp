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

// Problem URL: https://dmoj.ca/problem/ac19p2

int main() {
    fast;
    
    int N, L; cin >> N >> L; L = L%26;
    string ans = "";
    string s; getline(cin,s); getline(cin,s);
    for (char c: s) {
        if (c == ' ') ans+= ' ';
        else {
            if (c+L > 122) ans += (c+L-26);
            else ans+=(c+L);
        }
    }
    cout << ans << endl;
}
