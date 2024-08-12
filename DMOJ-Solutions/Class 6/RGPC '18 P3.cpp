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
    
    ll N, T, L; cin >> N >> T; vector<ll> chocolates(N+1,0);
    for (int i = 0; i < T; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        chocolates[a - 1] += c;
        if (b < N) chocolates[b] -= c;
    }
    for (int i = 1; i < N; ++i) {
        chocolates[i] += chocolates[i - 1];
    }
    cin >> L;

    int left = 0, right = 0;
    ll current_sum = 0;
    int max_cups = 0;

    while (right < N) {
        current_sum += chocolates[right];
        while (current_sum > L) {
            current_sum -= chocolates[left];
            left++;
        }
        max_cups = max(max_cups, right - left + 1);
        right++;
    }
    cout << max_cups << endl;

}
