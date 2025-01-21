#include <cstdio>
#include <stack>
using namespace std;
stack<int> st; int K, num, ans;
int main(){
    scanf("%d", &K);
    while(K--){
        scanf("%d", &num);
        if(!num) st.pop();
        else st.push(num);
    }
    while(!st.empty()){
        ans += st.top(); st.pop();
    }
    printf("%d\n", ans);
}