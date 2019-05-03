/*
Transform the array
Given an array containing integers, zero is considered an invalid number and rest all other numbers are valid. If two nearest valid numbers are equal then double the value of the first one and make the second number as 0.At last move all the valid numbers on the left.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case consists of an integer n. The next line consists of n spaced integers.

Output:
Print the resultant array.

Constraints: 
1<=T<=100
1<=N<=10000
1<=A[i]<=10000

Example:
Input:
1
12
2 4 5 0 0 5 4 8 6 0 6 8

Output:
2 4 10 4 8 12 8 0 0 0 0 0
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
 int a[n];
 for(i=0;i<n;i++)cin>>a[i];
 int prev=0,z=0;
 for(i=0;i<n;i++)
 {
     if(a[i]!=0)
     prev=i;
     if(a[i+1] == a[prev])
     {
         a[prev]=2*a[prev];
         a[i+1]=0;
     }
 }
 for(i=0;i<n;i++)
 {
     if(a[i]!=0)
     cout<<a[i]<<" ";
     else z++;
 }
 for(i=0;i<z;i++)
cout<<"0"<<" ";
cout<<endl;
     
 }
	//code
	return 0;
}
