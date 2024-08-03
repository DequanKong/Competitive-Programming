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


int main() {
    cin.sync_with_stdio();
    cin.tie(0);
    ll N, S, L; cin >> N >> S >> L;
    ll Pi, Mi, Gi; ll max = 100000; vector<pair<ll, ll>> numLine (max);
    ll left = S, right = S;
    for (int i = 0; i < N; ++i) {
        cin >> Pi >> Mi >> Gi;
        numLine[Pi] = {Mi, Gi};
    }
    
    while (true) {
        if (left - 1 >= 0 && L >= numLine[left-1].first) {
            L += numLine[left-1].second; left -= 1;
        } else if (right + 1 <= max && L >= numLine[right+1].first) {
            L += numLine[right+1].second; right += 1;
        } else {
            break;
        }
    }
    
    cout << L;
}
