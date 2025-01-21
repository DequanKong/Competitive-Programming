#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    int t; ll a,b,c,d; cin>>t;
    while (t--)  {
        cin>> a >>b>>c>>d;
        if ((b-a)*(d-c) > a*c) cout << "YES\n";
        else cout << "NO\n";
    }
    
}