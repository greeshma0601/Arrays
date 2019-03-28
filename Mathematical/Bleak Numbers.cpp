/*
Bleak Numbers
Given an integer, check whether it is Bleak or not.

A number ‘n’ is called Bleak if it cannot be represented as sum of a positive number x and set bit count in x, i.e., x + countSetBits(x) is not equal to n for any non-negative number x.

Examples :

3 is not Bleak as it can be represented
as 2 + countSetBits(2).

4 is t Bleak as it cannot be represented 
as sum of a number x and countSetBits(x)
for any number x.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of a single line. The first line of each test case contains a single integer N to be checked for Bleak.

Output:
Print "1" or "0" (without quotes) depending on whether the number is Bleak or not.

Constraints:
1 <= T <= 1000
1 <= N <= 10000

Example:
Input:
3
4
167
3

Output:
1
0
0
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool check(int n){
for(int i=n-ceil(log2(n));i<n;i++)
 {
     if(n == i+__builtin_popcount(i))
     return 0;
 }
 return 1;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 int n;
 cin>>n;
 cout<<check(n)<<endl;
 }
	//code
	return 0;
}
