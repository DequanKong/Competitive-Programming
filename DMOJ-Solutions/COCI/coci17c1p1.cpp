 #include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

int main() {
   // J, Q, K = 10, A = 11
    int N; cin >> N;
    int sum = 0;
    // 2 to 11
    int deck[20];
    for (int i = 2; i <= 9; ++i) deck[i] = 4;
    deck[10] = 16; deck[11] = 4;
    while (N--) {int x; cin >> x; sum+=x; deck[x]--;}
    int X = 21 - sum; int ans = 0;
    for (int i = 2; i <= 11; ++i) {
        if (i > X) ans+=deck[i];
    }
    if (ans >= 52 - ans - N) { cout << "DOSTA" << endl;}
    else {cout << "VUCI" << endl;}
}
