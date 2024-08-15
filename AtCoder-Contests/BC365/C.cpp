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
/*
 short int and int: -32,767 to 32,767
 long int: -2,147,483,647 to 2,147,483,647
 long long int: -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
 */

bool isFeasible(const vector<ll>& a, ll N, ll M, ll x) {
    ll total = 0;
    for (int i = 0; i < N; ++i) {
        total += min(x, a[i]);
        if (total > M) return false;
    }
    return total <= M;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll N, M;
    cin >> N >> M;
    vector<ll> a(N);
    ll maxA = 0;

    for (int i = 0; i < N; ++i) {
        cin >> a[i];
        maxA = max(maxA, a[i]);
    }

    ll low = 0, high = maxA, result = 0;

    while (low <= high) {
        ll mid = low + (high - low) / 2;
        if (isFeasible(a, N, M, mid)) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (result == maxA) {
        cout << "infinite" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
//    Sol D
  //  ll N; cin >> N; string s; ll counter = 0;
//    for (int i = 0; i < N; i++) {
//        char c; cin >> c;
//        if (i == 0) {
//            counter++;
//            if (c == 'P') {
//                s += 'S';
//
//            } else if (c == 'S') {
//                s += 'R';
//
//            } else {
//                s += 'P';
//            }
//        } else {
//            if (c == 'P') {
//                if (s[i-1] != 'S') {
//                    counter ++; s += 'S';
//                }
//                else s += 'P';
//            } else if (c == 'S') {
//                if (s[i-1] != 'R') {
//                    counter++; s += 'R';
//                }
//                else s += c;
//            } else {
//                if (s[i-1] != 'P') {
//                    counter++; s += 'P';
//                }
//                else s += c;
//            }
//        }
//
//    }
//
//    cout << counter;
    
    
//    ll N, M; cin >> N >> M; vector <ll> a; ll sum = 0;
//    for (int i = 0; i < N; i++) {
//        ll b; cin >> b; a.push_back(b); sum += b;
//    }
//    if (sum <= M) {
//        cout << "infinite";
//    } else {
//        sort(a.begin(), a.end()); ll counter = 0;
//        for (int i = 0; i < N; i++) {
//            ll p = a[i]; counter += a[i];
//            ll counter2 = counter; counter2 += p*(N-i-1);
//            if (counter2 > M) {
//                cout << a[i-1]; break;
//            }
//        }
//    }

