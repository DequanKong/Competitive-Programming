#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    boost();
    string s;
    getline(cin, s);
    int K; cin >> K; int count =0;
    for (char c: s) {
        if (c == 'S') {
            count++;
        }else {
            if (count >= K) {
                cout << "Spamming" << endl; return 0;
            } else {
                count = 0;
            }
        }
    }
    if (count >= K) { cout << "Spamming" << '\n';}
    else {cout << "All good" << endl; }
}
