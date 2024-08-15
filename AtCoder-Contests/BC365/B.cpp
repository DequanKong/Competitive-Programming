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
/*
 short int and int: -32,767 to 32,767
 long int: -2,147,483,647 to 2,147,483,647
 long long int: -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
 */

int main() {
    cin.sync_with_stdio();
    cin.tie(0);
    
    int N; cin >> N; vector <pair <ll, int>> a;
    for (int i = 0; i < N; i++) {
        ll b; cin >> b;
        a.push_back({b,i+1});
        
    }
    sort(a.begin(), a.end());
    cout << a[N-2].second;
}
