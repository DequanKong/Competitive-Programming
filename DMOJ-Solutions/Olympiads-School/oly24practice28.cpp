#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    
    int N, X, M;
    cin >> N >> X >> M;
    
    vector<int> heights(N);
    for (int i = 0; i < N; ++i) {
        cin >> heights[i];
    }
    
    vector<int> days;
    for (int i = 0; i < N; ++i) {
        if (heights[i] >= X) {
            days.push_back(0);
        } else {
            days.push_back(X - heights[i]);
        }
    }
    sort(days.begin(), days.end());
    
    cout << days[M - 1] << endl;
    
    return 0;
    
}