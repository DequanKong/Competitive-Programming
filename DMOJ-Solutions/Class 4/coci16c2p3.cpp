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
// Problem URL: https://dmoj.ca/problem/coci16c2p3

int main() {
    ll N; cin >> N; vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    ll left = 0, right = N-1, ln = a[0], rn = a[N-1], sum = 0;
    while (left <= right) {
        if (ln == rn) {
            left++; right--;
            if (left <= right) {
                ln = a[left]; rn = a[right];
            }
        } else {
            sum++;
            if (left + 1 == right) break;
            if (ln < rn) {
                left++; ln += a[left];
            } else {
                right --; rn += a[right];
            }
        }
    }
    cout << sum << "\n";
}
