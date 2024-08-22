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

// Problem URL: https://dmoj.ca/problem/ccc04j2

const int MM = 1e9+7;
const int INF = 0x3f3f3f3f;

vector<string> dir; vector<string> loc; string s=""; char c;

int main() {
    fast; loc.push_back("SCHOOL");
    while (true) {
        cin >> c >> s;  loc.push_back(s);
        if (c == 'R') dir.push_back("LEFT");
        else dir.push_back("RIGHT");
        if (s == "SCHOOL") break;
    }
    for (int i= dir.size()-1; i >= 0; --i) {
        if (i == 0) { cout << "Turn " << dir[0] << " into your HOME." << endl; }
        else { cout << "Turn " << dir[i] << " onto " << loc[i] << " street.\n"; }
    }
}
