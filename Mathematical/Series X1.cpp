/*

Series X1
Given a series of numbers 2, 10, 30, 68, 130.., Identify the pattern in the series and help to identify the integers at other indices. Indices are starting from 1.

Input:
The input line contains T, denoting the number of test cases. The description of each testcase follows. Each test case contains a single line with 1 integer X (index) .

Output: 
For each testcase in new line, print number at the Xth index .

Constraints: 
1 ≤ T ≤ 200
1 ≤ X ≤ 200

Example:     
Input:
4
8 
12
200
145

Output:
520
1740
8000200
3048770
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
 int r=n*(pow(n,2)+1);
 cout<<r<<endl;
     
 }
	//code
	return 0;
}
