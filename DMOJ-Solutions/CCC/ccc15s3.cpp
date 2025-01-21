#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MM = 1e5+3;
int G, P; set<int> gate;
int main(){
    cin >> G >> P;
    for(int i=1; i<=G; i++) gate.insert(i);
    for(int i=1, x; i<=P; i++) {
        cin >> x;
        auto it = gate.upper_bound(x);
        if(it == gate.begin()){
            cout << i-1 << endl;
            return 0;
        }
        it--;  gate.erase(it);
    }
    cout << P << endl;
}
