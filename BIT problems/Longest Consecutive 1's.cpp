/*
Longest Consecutive 1's
Given a number N. The task is to find the length of the longest consecutive 1s in its binary representation.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer N.

Output:
For each test case, in a new line, print the length of the longest consecutive 1's in N's binary representation.

Constraints:
1 <= T < 100
1 <= N <= 103

Example:
Input:
2
14
222

Output:
3 
4

Explanation:
Testcase 1: Binary representation of 14 is 1110, in which 111 is the longest consecutive set bits and length is 3.
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
 int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 int c=0;
 while(n!=0)
 {
     n=(n&n<<1);
     c++;
 }
 cout<<c<<endl;
 }
	//code
	return 0;
}
