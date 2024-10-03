#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";

int main() {
    boost();
    bool check = true;
    int K; cin >> K;
    int N; cin >> N;
    while (N--) {
        int x; cin >> x;
        if (K <= x) { cout << "fight" << endl; return 0;}
    }
    cout << "run away" << endl;
}