#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

int main() {
    int M; cin >> M;
    int arr[101] = {0};
    bool check[101] = {false};
    bool prevW = false;
    for (int i = 0; i < M; i++) {
        char R; int S;
        cin >> R >> S;
        if (R == 'R') {
            if (!prevW) {
                for (int j = 0; j < 101; j++) {
                    if (check[j] && j != S) {
                        arr[j]++;
                    }
                }
            }
            prevW = false;
            check[S] = true;
        } else if (R == 'S') {
            if (!prevW) {
                for (int j = 0; j < 101; j++) {
                    if (check[j]) {
                        arr[j]++;
                    }
                }
            }
            prevW = false;
            check[S] = false;
        } else {
            prevW = true;
            for (int j = 0; j < 101; j++) {
                if (check[j]) {
                    arr[j] += S;
                }
            }
        }
    }
    for (int i = 0; i < 101; i++) {
        if (check[i]) {
            cout << i << " " << -1 << endl;
        } else if (arr[i] != 0) {
            cout << i << " " << arr[i] << endl;
        }
    }
    return 0;
}