/*
Prime String
Provided a String of length N, your task is to find out whether or not the given string is a prime string. A prime string is a string in which the sum of the ASCII value of all the characters is prime.

Input:
The first line of the input contains an integer T, denoting the number of test cases. Then T test case follows. The first line of each test case contains an integer N denoting the length of the string, next line contains the input string str of length N.

Output:
For each test case print "YES" if the string is prime string else print "NO", on a new line.


Constraints:
1<=T<=102
1<=N<=108

Example:
Input
3
13
geeksforgeeks
4
JiiT
5
India
Output
YES
NO
NO
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
 int n;
 string s;
 cin>>n;
 cin>>s;int c=0;int f=1;
 for(int i=0;i<s.length();i++)
 {
     c+=s[i];
 }
 if(c<=1)goto l1;
 for(int i=2;i<c;i++)
 {
     if(c%i == 0){f=0;goto l1;}
 }
 if(f)
 cout<<"YES"<<endl;
 else{
 l1:cout<<"NO"<<endl;}
 }
	//code
	return 0;
}
