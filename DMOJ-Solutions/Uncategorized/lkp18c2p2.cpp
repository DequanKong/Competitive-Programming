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
int n, k, arr[200005], ans; ll x;
unordered_map<int,int> mp;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        arr[i] = (arr[i-1] + x%k)%k;
        mp[arr[i]]++;
    }
    mp[0]++;
    for (int i = 0; i < k; ++i) ans += mp[i]*(mp[i]-1)/2;
    cout << ans << "\n";
}