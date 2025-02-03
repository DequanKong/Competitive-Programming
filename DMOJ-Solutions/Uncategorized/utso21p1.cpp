#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    
    int n; cin>>n;
    for (int i = 1; i <= 1000000; ++i) {
        if (i%2==1) {
            int ans = (i+1)*(i+1)/2;
            if (ans>=n) {cout<<i<<"\n"; return 0; }
        } else {
            int ans = (i/2)*(i/2) + (i/2+1)*(i/2+1);
            if (ans>=n) {cout<<i<<"\n"; return 0; }
            
        }
    }
}