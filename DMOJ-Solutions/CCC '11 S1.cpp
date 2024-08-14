#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main() {
    int N; cin >> N; int tc = 0, sc = 0;
    for (int i = 0; i < N; ++i) {
        string s; 
        getline(cin, s);
        for (char c: s) {
            if (c == 't' or c == 'T') tc++;
            if (c == 's' or c == 'S') sc++;
        }
    }
    if (tc >= sc) cout << "English" << "\n";
    else cout << "French" << "\n";
    
    return 0;
}
