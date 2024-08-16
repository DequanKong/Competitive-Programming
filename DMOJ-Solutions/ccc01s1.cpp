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

// Problem URL: https://dmoj.ca/problem/ccc01s1
// Comment: I know, this is not a beautiful solution. But it's likely something I'd write on a contest 
// (my brain would be too lazy to craft a function for this problem)
const int MM = 1e9+7;
const int INF = 0x3f3f3f3f;

ll n;

int main() {
    fast;
    vector<char> C,D,H,S; char c,d=' '; int ci=0,di=0,hi=0,si=0;
    loop(i,0,17) {
        cin >> c;
        if (c == 'C' or c == 'D' or c == 'H' or c == 'S') {
            d = c; continue;
        }
        if (d == 'C') {
            C.push_back(c);
            if (c == 'A') ci+=4;
            if (c == 'K') ci+=3;
            if (c== 'Q') ci += 2;
            if (c == 'J') ci++;
        }
        if (d == 'D') {
            D.push_back(c);
            if (c == 'A') di+=4;
            if (c == 'K') di+=3;
            if (c== 'Q') di += 2;
            if (c == 'J') di++;
        }
        if (d == 'H') {
            if (c == 'A') hi+=4;
            if (c == 'K') hi+=3;
            if (c== 'Q') hi += 2;
            if (c == 'J') hi++;
            H.push_back(c);
        }
        if (d == 'S') {
            if (c == 'A') si+=4;
            if (c == 'K') si+=3;
            if (c== 'Q') si += 2;
            if (c == 'J') si++; S.push_back(c);
        }
        
    }
    if (C.size() < 3) ci += 3-C.size();
    if (D.size() < 3) di += 3-D.size();
    if (H.size() < 3) hi += 3-H.size();
    if (S.size() < 3) si += 3-S.size();

    cout << "Cards Dealt      Points" << endl;
    cout << "Clubs ";
    loop(i,0,C.size()) cout << C[i] << " ";
    cout << "  " << ci << endl;
    cout << "Diamonds ";
    loop(i,0,D.size()) cout << D[i] << " ";
    cout << "  " << di << endl;
    cout << "Hearts ";
    loop(i,0,H.size()) cout << H[i] << " ";
    cout << "  " << hi << endl;
    cout << "Spades ";
    loop(i,0,S.size()) cout << S[i] << " ";
    cout << "  " << si << endl;
    cout << "     Total " << ci+di+hi+si << endl;
}
