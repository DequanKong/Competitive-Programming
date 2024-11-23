#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c; cin >> a >> b >> c;
    if (a+b+c != 180) {cout << "Error\n"; return 0;}
    map<int,int> mp;
    mp[a]++; mp[b]++;mp[c]++;
    if (mp[a] == 3) cout << "Equilateral\n";
    else if (mp[a] == 2 or mp[b] == 2 or mp[c] == 2) cout << "Isosceles\n";
    else cout << "Scalene\n";
    return 0;
}