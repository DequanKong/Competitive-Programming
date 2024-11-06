#include <iostream>
 #include <vector>
 #include <string>
 #include <regex>
 #include <sstream>
 #include <algorithm>
 #include <cmath>
 #include <unordered_set>
 #include <list>
 #include <stdio.h>
 #include <ctype.h>
 #include <cstring>
 #include <cctype>
 #include <iomanip>
 #include <climits>
 #include <functional>
 #include <cstdlib>
 #include <ctime>
 #include <cstdio>
 #include <stack>
 #include <queue>
 #include <deque>
 #include <map>
 #include <set>
 #include <bitset>
 #include <complex>
 #include <random>

 using namespace std;
 typedef long long ll;
 #define endl "\n";
 #define loop(i,a,b) for (int i = a; i < b; ++i)

 // getline(cin, s);
 // freopen("input.txt", "r", stdin);
 // freopen("output.txt", "w", stdout);
 // INT_MAX


 int main() {
     ios::sync_with_stdio(0);
     cin.tie(0);
     
     ll N; cin >> N; vector<ll> a(N), b(N);
     loop(i,0,N) cin >> a[i];
     loop(i,0,N) cin >> b[i];
     ll as = 0, bs = 0; ll out = 0;
     loop(i,0,N) {
         as+= a[i]; bs += b[i];
         if (as==bs) out = i+1;
     }
     cout << out << endl;
    
 }