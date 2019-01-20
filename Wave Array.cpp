/*
Wave Array
Given a sorted array A of non-repeating integers without duplicates. Sort the array into a wave-like array and return it. In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5..... (considering the increasing lexicographical order).

Input:
The first line contains an integer T, depicting total number of test cases. T testcases follow. The first line of each testcase contains an integer N depicting the size of the array. The second line contains the elements of the array.

Output:
For each testcase, in a new line, print the array into wave-like array.

Constraints:
1 ≤ T ≤ 130
1 ≤ N ≤ 106
0 ≤ A[i] ≤107

Example:
Input:
1
5
1 2 3 4 5
Output:
2 1 4 3 5
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
 int i,n;
 cin>>n;
 long long int a[n];
 for(i=0;i<n;i++)
 cin>>a[i];
 for(i=0;i<=n-2;i+=2)
 {
     long long int t=a[i];
     a[i]=a[i+1];
     a[i+1]=t;
 }
 for(i=0;i<n;i++)
 cout<<a[i]<<" ";
 cout<<endl;
 }
	//code
	return 0;
}
