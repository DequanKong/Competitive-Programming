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
using namespace std;
typedef long long ll;
// Problem URL: https://dmoj.ca/problem/ccc00s2
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    vector <double> flows;
    vector <double> ::iterator it;
    int n, f, op = 0, index, perc;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> f;
        flows.push_back(f);
    }
    while (true) {
        cin >> op;
        if (op == 77) break;
        else if (op == 99) {
            cin >> index;
            cin >> perc;
            it = flows.begin() + index - 1;
            double value = flows[index-1];
            flows.insert(it, perc/100.0*value);
            flows[index] = (100-perc)/100.0*value;
//            cout << flows[index-1] << " " << flows[index] << " " << perc/100*value << " " << perc << " " << perc/100 << "\n";
        } else if (op == 88) {
            cin >> index;
            flows[index-1] += flows[index];
            flows.erase(flows.begin()+index);
        }
    }
    for (int i = 0; i < flows.size(); i++) {
        cout << (int) (flows[i]+0.5) << " ";
    }
    
}
