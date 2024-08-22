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
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define exit return 0;

// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// INT_MAX
// A to Z: 65 to 90 | a to z: 97 to 122

// Problem URL: https://dmoj.ca/problem/aac3p6

const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int MM = 1000000;

int N, M,R,C,ans, a[MM], b[MM], ansa[MM],ansb[MM];

void abc() {
    loop(i,0,N) ansa[i] = a[i]&1;
    loop(i,0,M) ansb[i] = (b[i]&1)^1;
    ++ans;
}
int main() {
    boost();
    
    cin >> R >> C >> N >> M; ans = max(R,C)+1;
    loop(i,0,N) cin >> a[i];
    loop(i,0,M) cin >> b[i];
    if (R<C) {
        for (int i = 0, j = 0, x = 0; i < M; ++i) {
            x= max(x,b[i]-C+R);
            while (j<N and a[j] < x) ++j;
            while (j<N and a[j]==x) {
                ++j; ++x;
            }
            if (x<=b[i]) ansb[i] = b[i]-x;
            else {
                abc();
                break;
            }
        }
    } else {
        for (int i = 0, j = 0, x = 0; i < N; ++i) {
            x = max(x,a[i]-R+C);
            while (j<M and b[j] < x) ++j;
            while (j<M and b[j]==x) {
                ++j; ++x;
            }
            if (x<=a[i]) ansa[i] = a[i]-x;
            else {
                abc();break;
            }
        }
    }
    cout << ans << endl;
    loop(i,0,N) {
        if (i == N-1) {cout << ansa[i] << endl;}
        else {cout << ansa[i] << " ";}
    }
    loop(i,0,M) {
        if (i == M-1) {cout << ansb[i] << endl;}
        else {cout << ansb[i] << " ";}
    }
}
