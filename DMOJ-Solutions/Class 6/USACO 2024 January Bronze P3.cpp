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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    // if L = 4, patch N gets 4, N-1 gets 3, ..., N-3 get 1, N-4 to 1 get nothing
    // Goal: Get everything to 0
    // Idea - -1,-2,-3,...-N OR 1,2,3,...,N
    int N; cin >> N; vector<ll> p(N), diff1(N), diff2(N); ll out = 0;
    loop(i,0,N) {
        cin >> p[i];
        if (i != 0) {
            diff1[i]=p[i]-p[i-1];
            diff2[i] = diff1[i]-diff1[i-1]; out += abs(diff2[i]);
        }
        else {
            diff1[i] = p[i]; diff2[i] = diff1[i]; out+= abs(diff2[i]);
        }
    }
    cout << out << endl;
    
}
