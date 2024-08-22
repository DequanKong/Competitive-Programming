#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
// Problem URL: https://dmoj.ca/problem/dmopc16c4p2

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int b, pi, f;
    ll fi, ei, ti;
    vector <ll> F, E, P, T;
    cin >> b;
    for (int i = 0; i < b; i++) {
        cin >> fi >> ei >> pi;
        F.push_back(fi); E.push_back(ei); P.push_back(pi);
    }
    
    cin >> f; ll output = 0;
    for (int i = 0; i < f; i++) {
        cin >> ti; T.push_back(ti);
    }
    sort(T.begin(), T.end());
    for (int i = 0; i < b; i++) {
        if (lower_bound(T.begin(), T.end(), F[i])-T.begin() == upper_bound(T.begin(),T.end(),E[i])-T.begin()) {
            output += P[i];
        }
    }
    cout << output << "\n";
    return 0;
}
