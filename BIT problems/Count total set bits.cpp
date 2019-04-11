/*
Count total set bits Submissions: 9291   Accuracy: 56.85%   Difficulty: Basic   Marks: 1
Associated Course(s):   Geeks Classes DSA   Geeks Classes in Noida   Geeks Classes DSA- Tutorials Less
       
Problems
You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive).

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. The first line of each test case is N.

Output:
For each testcase, in a new line, print the total count of all bits.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 103

Example:
Input:
2
4
17
Output:
5
35

Explanation:
Testcase1:
An easy way to look at it is to consider the number, n = 4:
0 0 0 = 0
0 0 1 = 1
0 1 0 = 1
0 1 1 = 2
1 0 0 = 1
Therefore , the total number of bits is 5.
 
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int c(int n)
{
    return __builtin_popcount(n);
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 int cn=0;
 for(i=1;i<=n;i++)
cn+=c(i);
cout<<cn<<endl;
     
 }
	//code
	return 0;
}
