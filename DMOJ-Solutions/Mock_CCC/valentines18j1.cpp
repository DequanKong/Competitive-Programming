#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

int main() {
    boost();
    int N; cin >> N;
    vector<ll> v(N);
    bool check1 = false, check2 = false;
    for (int i = 0; i < N; ++i) {
        cin >> v[i];
        if (v[i] > 1000 and v[i] <= 10000) check1 = true;
        else if (v[i] > 10000) check2 = true;
    }
    if (check2) {cout << "Something is wrong with these cuteness values" << endl;}
    else if (check1) {cout << "Cuteness by definition is similarity to Cactus" << endl;}
    else {cout << "Cuteness by definition is similarity to Carol" << endl;}
}