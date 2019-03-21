/*
Stickler Thief Submissions: 23151   Accuracy: 32.98%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
             
Problems
Discussions
Stickler the thief wants to loot money from a society having n houses in a single line. He is a weird person and follows a certain rule when looting the houses. According to the rule, he will never loot two consecutive houses. At the same time, he wants to maximize the amount he loots. The thief knows which house has what amount of money but is unable to come up with an optimal looting strategy. He asks for your help to find the maximum money he can get if he strictly follows the rule. Each house has a[i] amount of money present in it.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each test case contains an integer n which denotes the number of houses. Next line contains space separated numbers denoting the amount of money in each house.

Output:
For each testcase, in a newline, print an integer which denotes the maximum amount he can take home.

Constraints:
1 <= T <= 200
1 <= n <= 104
1 <= a[i] <= 104

Example:
Input:
2
6
5 5 10 100 10 5
3
1 2 3
Output:
110
4

Explanation:
Testcase1:
5+100+5=110
Testcase2:
1+3=4

*/
#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;
while(T--){
int N;
cin >> N;
int A[N];
for(int i = 0 ; i < N ; i++){
cin >> A[i];
}
int dp[N];
dp[0] = A[0];
dp[1] = max(A[0] , A[1]);
int test1;
int test2;
for(int i = 2 ; i < N ; i++){
test1 = A[i] + dp[i-2]; // A[i]is included
test2 = dp[i-1]; //A[i] is not included
dp[i] = max(test1 , test2);
}
cout << dp[N-1] << endl;
}
return 0;
}
