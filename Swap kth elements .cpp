/*
Swap kth elements Submissions: 7389   Accuracy: 39.46%   Difficulty: School   Marks: 0 *School Problem's Submission isn't counted in score!
         
Problems
Given an array of size N, swap the kth element from beginning with kth element from end.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each testcase contains 2 lines of input:
The first line contains an integer N, where N is the size of array.
The second line contains N integers(elements of the array) sperated with spaces.

Output:
For each test case, print the modified array.

Constraints:
1 ≤ T ≤ 200
1 ≤ K ≤ N ≤ 500
1 ≤ A[i] ≤ 1000

Example:
Input
1
8 3
1 2 3 4 5 6 7 8
Output
1 2 6 4 5 3 7 8
 
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
 int a[n];int c1=0;int i1=k-1;int i2 = n-k;
 for(i=0;i<n;i++)cin>>a[i];
 swap(a[i1],a[i2]);
 for(i=0;i<n;i++)cout<<a[i]<<" ";
 cout<<endl;
 
 }
	//code
	return 0;
}
