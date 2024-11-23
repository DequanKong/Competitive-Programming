#include <bits/stdc++.h>
using namespace std;
const int MM = 30;
int n, cnt=0, row[MM]; bool col[MM], lft[2*MM-1], rit[2*MM-1];
void putQueen(int r){
    if(r == n) { 
        ++cnt;
        return;
    }
    for(int c=0; c<n; c++){
        if(!col[c] && !lft[r+c] && !rit[r+n-1-c]){
            row[r] = c;  col[c] = lft[r+c] = rit[r+n-1-c] = true;
            putQueen(r+1);
            col[c] = lft[r+c] = rit[r+n-1-c] = false;
        }
    }
}
int main(){
    cin >> n;
    putQueen(0);
    cout << cnt << endl;
}