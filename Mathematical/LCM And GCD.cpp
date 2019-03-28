/*
LCM And GCD Submissions: 13537   Accuracy: 50.97%   Difficulty: Basic   Marks: 1
Associated Course(s):   Interview Preparation   Fundamentals of Programming with C More
       
Problems
Given two numbers A and B. The task is to find out their LCM and GCD.

Input:
The first line of input contains an integer T denoting the number of testcases. T testcases follow. In each test cases, there are two numbers A and B separated by space.

Output:
For each testcase in a new line, print LCM and GCD separated by space.

Constraints:
1 <= T <= 104
1 <= A <= 108
1 <= B <= 108

Example:
Input:
2
5 10
14 8

Output:
10 5
56 2

Explanation:
Testcase 1: LCM and GCD of given numbers 5 and 10 are: 10 and 5.

*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
long long int gcdn(long long int m,long long int n)
{
    if(n == 0)return m;
    else return gcdn(n,m%n);
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 long long int m,n;
 cin>>m>>n;
 long long int gcd=gcdn(m,n);
 cout<<(m*n)/gcd<<" "<<gcd<<endl;
 }
	//code
	return 0;
}
