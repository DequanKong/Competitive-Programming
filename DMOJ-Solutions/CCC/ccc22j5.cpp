#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 105;
int xPos[MM],yPos[MM];

int main() {
    fast();
 
    int N, T; cin >> N >> T;
    for (int i = 0; i < T; ++i) {
        cin >> xPos[i] >> yPos[i];
    }
    
    xPos[T] = 0; yPos[T] = 0;
    int ans = 0;
    for (int x: xPos) {
        for (int y: yPos) {
            int diff = min(N-x,N-y);
            for (int k = 0; k <= T; ++k) {
                if (x < xPos[k] and y < yPos[k]) {
                    diff=  min(diff, max(xPos[k]-x, yPos[k]-y)-1);
                }
            }
            ans = max(ans,diff);
        }
    }
    cout << ans << "\n";
}