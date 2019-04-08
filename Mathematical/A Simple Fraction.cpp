/*
A Simple Fraction Submissions: 8646   Accuracy: 21.71%   Difficulty: Hard   Marks: 8
Associated Course(s):   Interview Preparation   Geeks Classes in Noida
          
Problems
Given a fraction. Convert it into a decimal. So simple :P

eg.
10/2 = 5
3/5 = 0.6

(The Question Begins Now)  :D
If the decimals are repeating recursively, then enclose them inside  ().

eg.
8/3 = 2.(6)

as 8/3 = 2.66666666.......  infinitly.   
  

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is an integer N denoting the numerator of fraction.
The second line of each test case is an integer D denoting the denominator of fraction.

Output:

Print decimal of that fraction in separate line for each test case.

Constraints:

1 ≤ T ≤ 100
1 ≤ N,D ≤ 2000

Example:

Input
2
4
2
8
3
Output
2
2.(6)

 

 

*/

#include <bits/stdc++.h>
using namespace std;

void eval(int num, int den) {
    cout << num/den;
    if (num%den == 0) return;
    cout << ".";
    map<int, int> mp;
    vector<int> d;
    int rem = num%den;
    mp[rem] = 0;
    int mpInd = 1;
    int same = -1;
    while(rem > 0) {
        rem *= 10;
        d.push_back(rem/den);
        rem = rem%den;
        if (mp.find(rem) != mp.end()) {
            same = mp[rem];
            break;
        }
        mp[rem] = mpInd++;
    }
    if (same == -1) {
        for (int k : d) cout << k;
    } else {
        for (int i=0; i < same; i++) cout << d[i];
        cout << "(";
        for (int i=same; i < d.size(); i++) cout << d[i];
        cout << ")";
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, d;
        cin >> n >> d;
        eval(n, d);
        cout << "\n";
    }
    return 0;
}
