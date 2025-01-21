#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,omit-frame-pointer,prefetch-loop-arrays")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define loop(i,a,b) for (int i = a; i < b; ++i)
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 1000000;

int N, M,R,C,ans, a[MM], b[MM], ansa[MM],ansb[MM];

void abc() {
    loop(i,0,N) ansa[i] = a[i]&1;
    loop(i,0,M) ansb[i] = (b[i]&1)^1;
    ++ans;
}
int main() {
    fast();
    
    cin >> R >> C >> N >> M; ans = max(R,C)+1;
    loop(i,0,N) cin >> a[i];
    loop(i,0,M) cin >> b[i];
    if (R<C) {
        for (int i = 0, j = 0, x = 0; i < M; ++i) {
            x= max(x,b[i]-C+R);
            while (j<N and a[j] < x) ++j;
            while (j<N and a[j]==x) {
                ++j; ++x;
            }
            if (x<=b[i]) ansb[i] = b[i]-x;
            else {
                abc();
                break;
            }
        }
    } else {
        for (int i = 0, j = 0, x = 0; i < N; ++i) {
            x = max(x,a[i]-R+C);
            while (j<M and b[j] < x) ++j;
            while (j<M and b[j]==x) {
                ++j; ++x;
            }
            if (x<=a[i]) ansa[i] = a[i]-x;
            else {
                abc();break;
            }
        }
    }
    cout << ans << endl;
    loop(i,0,N) {
        if (i == N-1) {cout << ansa[i] << endl;}
        else {cout << ansa[i] << " ";}
    }
    loop(i,0,M) {
        if (i == M-1) {cout << ansb[i] << endl;}
        else {cout << ansb[i] << " ";}
    }
}