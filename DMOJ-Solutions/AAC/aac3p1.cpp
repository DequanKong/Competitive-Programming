#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    fast();
    int a, b, c, d; cin >> a >> b >> c >> d;
    if (a<b and c<d) cout << "Go to the department store\n";
    else if (a<b) cout << "Go to the grocery store\n";
    else if (c<d) cout << "Go to the pharmacy\n";
    else cout << "Stay home\n";
    
}