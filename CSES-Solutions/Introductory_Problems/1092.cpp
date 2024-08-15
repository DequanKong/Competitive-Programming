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

// Problem Link: https://cses.fi/problemset/task/1092/
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll N; cin >> N; ll sum = N*(N+1)/2;
    if (sum % 2 == 1)  { cout << "NO" << endl; }
    else if (N == 3) {
        cout << "YES\n1\n3\n2\n2 1";
    }
    else {
        ll one = 2, two;
        cout << "YES" << "\n";
        vector<bool> rest(N,true);
        rest[0] = false; rest[N-1] = false;
        ll bigSetSum = 1+N; ll half = N*(N+1)/4;
        for (int i = N-1; bigSetSum+i <= half && i-1 > 0; i--) {
            bigSetSum += i; rest[i-1] = false; one++;
        }
        if (half-bigSetSum > 0)
        {  rest[half-bigSetSum-1] = false; one++;}
//        cout << "1 " << N << " ";
        // cout << half-bigSetSum << "\n" << big << endl;
        two = N - one;
        cout << one << endl;
        for (int i = 0; i < N; i++) {
            if (!rest[i]) cout << i+1 << " ";
        }
        cout << endl;
        cout << two << endl;
        for (int i = 0; i < N; ++i) {
            if (rest[i]) cout << i+1 << " ";
        }
    }
}
