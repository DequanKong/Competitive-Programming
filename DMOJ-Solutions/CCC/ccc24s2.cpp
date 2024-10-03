#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

int main() {
    int T, N; cin >> T >> N;
    while (T--) {
        map <char, int> mp;
        string s; cin >> s; bool heavy = false, check = false;
        for (int i = 0; i < N; ++i) {
            mp[s[i]]++;
        }
        if (mp[s[0]] > 1) heavy = true;
        for (int i = 1; i < N; ++i) {
            if (mp[s[i]] > 1 and heavy) { cout << "F" << endl; check = true; break;}
            if (mp[s[i]] <= 1 and !heavy) { cout << "F" << endl; check = true; break;}
            if (mp[s[i]] <= 1) heavy = false;
            if (mp[s[i]] > 1) heavy = true;
            
        }
        if (!check) cout << "T" << endl;
    }
}