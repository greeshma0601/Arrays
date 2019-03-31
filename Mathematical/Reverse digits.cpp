/*
Reverse digits
Write a program to reverse digits of a number N.

Input:
The first line of input contains an integer T, denoting the number of test cases. T testcases follow. Each test case contains an integer N.

Output:
For each test case, print the reverse digits of number N .

Constraints:
1 ≤ T ≤ 104
1 ≤ N ≤ 1015

Example:
Input:
2
200
122
Output:
2
221
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
 long long int n;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 long long int num=0;
 while(n)
 {
     num=num*10+n%10;
     n/=10;
 }
   cout<<num<<endl;  
 }
	//code
	return 0;
}
