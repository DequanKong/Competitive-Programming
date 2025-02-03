#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n; char code[26]; string s;
unordered_set<char> st = {'A','B','C','D','E'};
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= 25; ++i) cin >> code[i];
    while (n--) {
        cin >> s;
        for (int i = 0; i < s.size(); ++i) {
            char c = s[i];
            if (st.find(c) == st.end()) cout << c;
            else {
                char num = s[i+1]; i++;
                cout << code[(c-'A')*5+(num-'0')];
            }
        }
        cout << "\n";
    }
}