#include <bits/stdc++.h>
using namespace std;

int main(){
   
    int zero, one, two, three, four, five, six, seven, eight, nine, ten, hundred;
    zero = INT_MIN + INT_MAX;
    zero++; zero++; one = zero; zero--; two = one+one; three = one+two; four = two+two; five = four + one;
    six = three*two; seven = three+four; eight = four+four; nine = four+five; ten = five*two;
    hundred = ten*ten;
    
    cout << (char) (seven*ten+two) << (char) (hundred+one) << (char) (hundred+eight) << (char) (hundred+eight);
    cout << (char) (hundred+ten+one) << (char) (four*ten+four) << (char) (three*ten+two) << (char) (eight*ten+seven);
    cout << (char) (hundred+ten+one) << (char) (hundred+ten+four) << (char) (hundred+eight) << (char) hundred << (char) (three*ten+three);
}