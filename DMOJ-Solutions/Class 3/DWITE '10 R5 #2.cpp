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
    for(int i = 0; i < 5; i++) {
        int R, C, Ro; cin >> R >> C >> Ro;
        unordered_set <int> x, y;
        for (int i = 0, xi, yi; i < Ro; i++) {
            cin >> xi >> yi;
            x.insert(xi); y.insert(yi);
        }
        
        cout << (R-x.size())*(C-y.size()) << "\n";
    }
    
}
