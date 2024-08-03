#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        string s;
        cin >> s;
        
        stack<char> st;
        bool check = true;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
                if (!st.empty() && ((s[i] == ')' && st.top() == '(') ||
                                    (s[i] == '}' && st.top() == '{') ||
                                    (s[i] == ']' && st.top() == '['))) {
                    st.pop();
                } else {
                    check = false;
                    break;
                }
            }
        }
        
        if (check && st.empty()) {
            cout << "balanced" << endl;
        } else {
            cout << "not balanced" << endl;
        }
    }
    return 0;
}
