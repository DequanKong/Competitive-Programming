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
#define fast ios::sync_with_stdio(0); cin.tie(0);

// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// INT_MAX

// https://dmoj.ca/problem/ccc03j1

int main() {
    fast;
    
    int t, s, h; cin >> t >> s >> h;
    for (int i = 0; i < t; ++i) {
        loop(i,0,2) {
            cout << "*";
            loop(i,0,s){
                cout << " ";
            }
        }
        cout << "*" << endl;
    }
    int k = 2*s+3;
    loop(i,0,k) {
        cout << "*";
    }
    cout << endl;
    loop(i,0,h){
        for (int i = 0; i < k/2; ++i) {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }
}
    
