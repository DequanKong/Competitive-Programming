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
using namespace std;
typedef long long ll;
// Problem URL: https://dmoj.ca/problem/oly20practice82
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int N, Q; ll pi, Li, Ri;
    cin >> N >> Q;
    vector <ll> locations, L, R;
    for (int i = 0; i < N; i++) {
        cin >> pi; locations.push_back(pi);
    }
    for (int i = 0; i < Q; i++) {
        cin >> Li >> Ri;
        L.push_back(Li); R.push_back(Ri);
    }
    sort(locations.begin(), locations.end());

    for (int i = 0; i < Q; i++) {
        long small = lower_bound(locations.begin(), locations.end(), L[i]) - locations.begin();
        long big = upper_bound(locations.begin(), locations.end(), R[i]) - locations.begin();
        if (i == Q-1) cout << big - small;
        else cout << big - small << "\n";
    }
    
}
