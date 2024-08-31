#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    boost();
    
    string s; ll count = 0;
    while (s != "True" and s != "False") {
        cin >> s; count++;
    }
    count--; count%=2;
    if (count == 0) {
        if (s == "True") cout << s << endl;
        else cout << "False" << endl;
    } else {
        if (s == "True") cout << "False" << endl;
        else cout << "True" << endl;
    }
}