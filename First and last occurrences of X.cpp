/*
First and last occurrences of X
Given a sorted array with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.

Note: If the number x is not found in the array just print '-1'.

Input:
The first line consists of an integer T i.e number of test cases. The first line of each test case contains two integers n and x. The second line contains n spaced integers.

Output:
Print index of the first and last occurrences of the number x with a space in between.

Constraints: 
1<=T<=100
1<=n,a[i]<=1000

Example:
Input:
2
9 5
1 3 5 5 5 5 67 123 125
9 7
1 3 5 5 5 5 7 123 125

Output:
2 5
6 6

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
 int n,i,k;cin>>n>>k;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 int f,l;int f1=0,f2=0;
 for(i=0;i<n;i++)
 {
     if(a[i] == k)
     {
         f1=1;
         f=i;
         break;
     }
     
 }
 for(i=n-1;i>=0;i--)
 {
     if(a[i] == k)
     {
         f2=1;
         l=i;break;
     }
 }
 
 if(f1 && f2)
 cout<<f<<" "<<l<<endl;
 else 
 cout<<"-1"<<endl;
 }
	//code
	return 0;
}
