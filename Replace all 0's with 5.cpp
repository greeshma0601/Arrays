/*
Replace all 0's with 5 Submissions: 7707   Accuracy: 57.56%   Difficulty: School   Marks: 0 *School Problem's Submission isn't counted in score!
        
Problems
Discussions
Given a number N. The task is to complete the function convertFive() which replace all zeros in the number with 5 and returns the number.

Input:
The first line of input contains an integer T, denoting the number of testcases. Then T testcases follow. Each testcase contains a single integer N denoting the number.

Output:
The function will return integer where all zero's are converted to 5.

User Task:
Since this is a functional problem you don't have to worry about input, you just have to complete the function convertFive().

Constraints:
1 <= T <= 103
1 <= N <= 104

Example:
Input
2
1004
121

Output
1554
121

Explanation:
Testcase 1:  At index 1 and 2 there is 0 so we replace it with 5.
Testcase 2: There is no ,0 so output will remain same.

*/

int convertFive(int n)
{
//Your code here
int num=0,c=0,r;
while(n!=0)
{
    r=n%10;
    n=n/10;
    if(r == 0)r=5;
    num=num+r*pow(10,c);
    c++;
}
return num;
}
