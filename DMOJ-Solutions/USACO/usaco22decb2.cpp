#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 1e5+5;
char row[MM], grass[MM];

int main() {
    fast();
    
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        int N, K;
        cin >> N >> K;
        for (int i = 0; i < N; ++i) {
            cin >> row[i];
        }
        
        memset(grass, '.', sizeof(grass));
        
        int lastG = -1, lastH = -1, ans = 0;
        for (int i = 0; i < N; ++i) {
            char c = row[i];
            if (c == 'G') {
                if (lastG == -1 || abs(i - lastG) > K) {
                    if (i + K < N-1) lastG = i + K;
                    else lastG = N - 1;
                    ans++;
                    if (grass[lastG] == '.') {
                        grass[lastG] = 'G';
                    } else {
                        for (int p = 1; p <= K; ++p) {
                            if (grass[lastG-p] == '.') {
                                grass[lastG-p] = 'G'; break;
                            }
                        }
                    }
                    
                }
            } else if (c == 'H') {
                if (lastH == -1 || abs(i - lastH) > K) {
                    if (i + K < N-1) lastH = i + K;
                    else lastH = N - 1;
                    ans++;
                    if (grass[lastH] == '.') {
                        grass[lastH] = 'H';
                    } else {
                        for (int p = 1; p <= K; ++p) {
                            if (grass[lastH-p] == '.') {
//                                if (t == 5) cout << grass[0] << "sdjfls" << lastH - p << "\n";
                                grass[lastH-p] = 'H'; break;
                            }
                        }
                    }
                }
            }
        }
        
        cout << ans << "\n";
        for (int i = 0; i < N; ++i) {
            cout << grass[i];
        }
        cout << "\n";
    }
    
}