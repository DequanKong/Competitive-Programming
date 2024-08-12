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
int main() {
    ll N; cin >> N;
    vector <ll> a; ll x;
    for (int i = 0; i < N; i++) {
        cin >> x; a.push_back(x);
    }
    sort(a.begin(), a.end());
    ll max = 0, d;
    for (int i = 0; i < N; i++) {
        if (a[i]*(N-i) > max) {
            max = a[i]*(N-i);
            d = a[i];
        }
    }
    cout << max << " " << d;
    return 0;
}
