#include <bits/stdc++.h>

using namespace std;
// Problem URL: https://dmoj.ca/problem/dwite08c3p2
int main() {
    string sentence = "";
    int N = 5;
    int output[N];

    for (int i = 0; i < N; i++) {
        getline(cin, sentence);

            regex wordRegex("[^A-Za-z]+");
            sregex_token_iterator words_begin(sentence.begin(), sentence.end(), wordRegex, -1);
            sregex_token_iterator words_end;

            int count = 0;
            for (sregex_token_iterator it = words_begin; it != words_end; ++it) {
                string word = *it;
                if (word.length() > 3) {
                    count++;
                }
            }
            output[i] = count;
        }

        for (int i = 0; i < N; i++) {
            cout << output[i] << endl;
        }
    return 0;
}
