#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
    
    int a,b,c,d,e,f; cin>>a>>b>>c>>d>>e>>f;
    int diff = max(c-f,abs(1-f));
    int ans = 0;
    if (abs(a-d)%diff!=0) ans+=1;
    if (abs(b-e)%diff!=0) ans+=1;
    cout << ans+abs(a-d)/diff+abs(b-e)/diff;
}