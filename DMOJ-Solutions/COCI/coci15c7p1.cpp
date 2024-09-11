#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

int main() {
    boost();
    string s; cin >> s;
    // { } , c
    bool start = 1;
    int indent = 0;
    for (int i = 0; i < s.size(); ++i){
        if (s[i] == '}') indent--;
        if (!start && (s[i] == '{' || s[i] == '}')) cout << '\n', start = 1;
        if (start){
            for (int j = 0; j < indent; ++j) cout << "  ";
        }
        if (s[i] == '{'){
            indent++;
            cout << '{' << '\n';
            start = 1;
        }
        else if (s[i] == '}'){
            cout << '}';
            start = 0;
        }
        else if (s[i] == ','){
            cout << ',' << '\n';
            start = 1;
        }
        else{
            cout << s[i];
            start = 0;
        }
    }
    cout << '\n';
    
}