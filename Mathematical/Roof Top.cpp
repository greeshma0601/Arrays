/*
Roof Top Submissions: 3066   Accuracy: 23.2%   Difficulty: Easy   Marks: 2
Associated Course(s):   Geeks Classes DSA   Geeks Classes in Noida   Geeks Classes DSA- Tutorials Less
     
Problems
You are given heights of consecutive buildings. You can move from the roof of a building to the roof of next adjacent building. You need to find the maximum number of consecutive steps you can put forward such that you gain an increase in altitude.

Input:
The first line contains an integer T, denoting number of test cases. First line of each test case contains an integer N, denoting number of buildings. Second line of the test case contains N space separated integers, the ith integer denote the hieght of the ith building.

Output:
For each test case, print maximum number of consecutive steps he can put forward such that he increase in altitude, in separate lines. He initially is on the roof of the first building.

Constraints:
1 <= T <= 104
1 <= N <= 104
1 <= Ai <= 104

Example:
Input:
2
5
1 2 2 3 2
4
1 2 3 4
Output:
1
3

Explanation:
Testcase 1: 1, 2 or 2, 3 are the only consecutive buildings with increasing heights.
Testcase 2: 1 to 2 to 3 to 4 is the jump of length 3 to have maximum number of buildings with increasing heights.
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;cin>>n;int c=0,r=0;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 for(i=1;i<n;i++)
 {
     if(a[i]>a[i-1] && a[i]!=a[i-1])
     {
         c++;
     }
     else c=0;
     if(c>r)
     r=c;
     
 }
 cout<<r<<endl;
     
 }
	//code
	return 0;
}
