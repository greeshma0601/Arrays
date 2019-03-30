/*
Count pair sum
Given two sorted arrays of size m and n of distinct elements. Given a value x. The problem is to count all pairs from both arrays whose sum is equal to x.
Note: The pair has an element from each array.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains two integers m and n denoting the size of the two arrays. The next two lines contains the two arrays arr1 and arr2 respectively. The last line contains the value of sum x.

Output:
Print the count of all pairs from both arrays whose sum is equal to x.

Constraints:
1<=T<=100
1<=m,n<=10^5
1<=arr1[i],arr2[j]<=10^5
1<=k<=10^5

Example:
Input:
2
4 4
1 3 5 7
2 3 5 8
10
7 7
1 2 3 4 5 7 11
2 3 4 5 6 8 12
9

Ouput:
2
5
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
 int i,j,m,n;
 cin>>m>>n;
 int a[m],b[n];
 int c=0;set<int>s;
 for(i=0;i<m;i++)
 {cin>>a[i];s.insert(a[i]);}
 for(i=0;i<n;i++)
 cin>>b[i];
 int x;
 cin>>x;
 for(i=0;i<n;i++)
 {
     if(s.find(x-b[i])!=s.end())
     c++;
 }
 cout<<c<<endl;
 }
	//code
	return 0;
}
