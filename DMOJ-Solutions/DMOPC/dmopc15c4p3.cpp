#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";

// HEARTHSTONE PROBLEM !!!!!!!!1111!!!!1!!!!!!!
int main() {
    boost();
    int G; cin >> G;

    while (G--) {
        int N; cin >> N;
        vector<int> v(N); int total = 0;
        for (int i = 0; i < N; ++i) { cin >> v[i]; total += v[i];}
        int enemy, taunt; cin >> enemy >> taunt;
        if (total < enemy + taunt) {cout << "NOT LETHAL" << endl; continue; }
        sort(v.begin(),v.end()); vector<int> psa(N); psa[0] = v[0];
        for (int i = 1; i < N; ++i) psa[i] = psa[i-1] + v[i];
        int mn = INT_MAX;
        for (int size = 1; size <= N; ++size) {
            for (int i = 0; i <= N - size; ++i) {
                if (size == 1) { if (v[i] >= taunt) mn = min(mn, v[i]); continue;}
                for (int j = i+size-1; j < N; ++j) {
                    if ( i == 0) { if (psa[size-2] + v[j] >= taunt) mn = min(mn, psa[size-2] + v[j]); continue;}
                    int x = psa[i + size-2] - psa[i-1] + v[j];
                    if (x >= taunt) mn = min(mn,x);
                    
                }
            }
        }
        if (total - mn >= enemy) { cout << "LETHAL" << endl; }
        else { cout << "NOT LETHAL" << endl;}
    }
}