#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    
    string s; cin >> s;
    ll h = 0, v = 0;
    for (char c: s) {
        if (c == 'H') h++;
        if (c == 'V') v++;
    }
    h %= 2; v %= 2;
    if (h == 0 and v == 0) {
        cout << "1 2\n3 4\n";
    } else if (h == 0 and v == 1) {
        cout << "2 1\n4 3\n";
    } else if (h == 1 and v == 0){
        cout << "3 4\n1 2\n";
    } else {
        cout << "4 3\n2 1\n";
    }
}