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
    int T; cin >> T;
    for (int i = 0; i < T; i++) {
        ll N; cin >> N; ll counter = 1;
        stack <ll> st, initial; bool check = true;
        for (int i = 1; i <= N; i++) {
            ll a; cin >> a; initial.push(a);
        }
        while (counter <= N) {
            if (initial.top() == counter) {
                counter++;
                if (!st.empty()) {
                    while (!st.empty() and st.top() == counter ) {
                        st.pop(); counter++;
                    }
                }
                
            }
            else if (st.empty()) st.push(initial.top());
            else {
                if (initial.top() < st.top()) {
                    st.push(initial.top());
                } else {
                    check = false; break;
                }
            }
            initial.pop();
            if (!check) break;
        }
        if (check) cout << "Y\n";
        else cout << "N\n";
    }
}
