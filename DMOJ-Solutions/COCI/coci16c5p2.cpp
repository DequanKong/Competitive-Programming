#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

int main() {
    boost();
   
    int N; cin >> N; vector<ll> v(N); ll sum = 0;
    for (int i = 0; i < N; ++i) {
        cin >> v[i]; sum += v[i];
    }
    
    sort(v.begin(),v.end(), greater<ll>());
    vector<ll> psa(N); psa[0] = v[0];
    for (int i = 1; i < N; ++i) {
        psa[i] = psa[i-1] + v[i];
//        cout << psa[i] << " ";
    }
//    cout << endl;
    long double ansA = 0, ansB = 0, ansDiff = 0;
    for (int i = 0; i < N; ++i) {
        long double A = (i+1)*100.0/N;
        long double B = psa[i]*100.0/sum;
//        cout << B << " ";
        long double diff = B - A;
        if (diff > ansDiff) {
            ansA = A; ansB = B; ansDiff = diff;
        }
    }
    cout << ansA << '\n' << ansB << endl;
} 