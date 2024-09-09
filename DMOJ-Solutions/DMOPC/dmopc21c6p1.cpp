#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

const int MM = 1e6+5;
char num[MM];
int main() {
    boost();
    int D; cin >> D;
    for (int i = 1; i <= D; ++i) {cin >> num[i];}
    bool check = true;
    for (int i = 1; i < D; ++i) {
        if (num[i+1] > num[i] and check) {
            int temp = num[i];
            num[i] = num[i+1]; num[i+1] = temp; check = false;
        }
        cout << num[i];
    }
    cout << num[D];
}