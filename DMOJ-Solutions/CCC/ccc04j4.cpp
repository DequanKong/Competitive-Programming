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

// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// INT_MAX
// A to Z: 65 to 90 | a to z: 97 to 122

// Problem URL: https://dmoj.ca/problem/ccc04j4

const int MM = 1e9+7;
const int INF = 0x3f3f3f3f;

int main() {
    fast; 
    string k, s, S, ans; cin >> k; cin.ignore();
    getline(cin,s);
    loop(i,0,s.size()) {
        if (65 <= s[i] && s[i] <= 90) S+=s[i];
    }
    vector<char> key(k.size());
    loop(i,0,k.size()) key[i] = k[i];
    loop(i,0,S.size()) {
        char c = S[i]+key[i%k.size()]-'A';
        if (S[i]+key[i%k.size()]-'A' > 90) c -= 26;
        ans += c;
    }
    cout << ans << endl;
}
