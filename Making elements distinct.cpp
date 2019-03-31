/*
Making elements distinct Submissions: 1972   Accuracy: 22.55%   Difficulty: Basic   Marks: 1
   
Problems
Given a sorted integer array. We need to make array elements distinct by increasing values and keeping array sum minimum possible. We need to print the minimum possible sum as output.

Input:
The first line of the input contains a single integer T denoting the number of test cases. The first line of each test case contains N. followed by N separate integers. 

Output:
For each test caseprint the minimum possible sum.

Constraints:
1 ≤ T ≤ 100
2 ≤ N ≤ 10^4
1 ≤ A[i] ≤ 10^3

Example:
Input:
2
5
2 2 3 5 6
2
20 20
Output:
20
41

Explanation :
Test Case 1: We make the array as {2, 3, 4, 5, 6}. Sum becomes 2 + 3 + 4 + 5 + 6 = 20

Test Case2 : We make the array as  {20, 21 } .sum = 41
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
 long long int n,i;
 cin>>n;
long long int a[n];
for(i=0;i<n;i++)cin>>a[i];
 for(i=1;i<n;i++)
 {
     if(a[i]==a[i-1])
     {
         a[i]=a[i]+1;
     }
     if(a[i+1]<a[i])
     {
         a[i+1]+=2;
     }
 }
 
 long long int s=0;
 for(i=0;i<n;i++)
 s+=a[i];
 cout<<s<<endl;
 }
	//code
	return 0;
}
