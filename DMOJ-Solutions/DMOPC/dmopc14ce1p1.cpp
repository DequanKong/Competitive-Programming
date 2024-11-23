#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    string verb, obj; cin >> verb >> obj;
    
    cout << verb << "-tu ";
    if (obj[obj.size()-1] == 'e') cout << "la ";
    else if (obj[obj.size()-1] == 's') cout << "les ";
    else cout << "le ";
    cout << obj << " ?\n";
}