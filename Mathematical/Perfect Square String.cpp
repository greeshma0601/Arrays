/*
Perfect Square String
You are given a string S. Your task is to determine if sum of ASCII values of all character results in a perfect square or not.

Input:
The first line of the input contains a single integer T, denoting the number of test cases. Then T test cases follow. Each testcase has a string S

Output:
Print 1 if the resulting sum is a perfect square, else print 0.

Constraints:
1<=T<=100
1<=|S|<=1000

Example:

Input:
4
1Qy
abcd
efgh
d

Output:
0
0
0
1
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
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 string s;
 cin>>s;int c=0;
 for(int i=0;i<s.length();i++)
 {
     c+=s[i];
 }
 int n=sqrt(c);
 if(n*n == c)cout<<"1"<<endl;
 else cout<<"0"<<endl;
 }
	//code
	return 0;
}
