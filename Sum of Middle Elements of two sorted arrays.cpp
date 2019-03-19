/*
Sum of Middle Elements of two sorted arrays Submissions: 11144   Accuracy: 44.28%   Difficulty: Easy   Marks: 2
         
Problems
Discussions
Given 2 sorted arrays A and B of size N each. Print sum of middle elements of the array obtained after merging the given arrays.

Input:
The first line contains T denoting the number of testcases. Then follows description of testcases.
Each case begins with a single positive integer N denoting the size of array. The second line contains the N space separated positive integers denoting the elements of array A. The third line contains N space separated positive integers denoting the elements of array B.

Output:
For each testcase, print the sum of middle elements of two sorted arrays. The number of the elements in the merged array are even so there will be 2 numbers in the center n/2 and n/2 +1. You have to print their sum.

Constraints:
1 <= T <= 50
1 <= N <= 103
1 <= A[i] <= 106
1 <= B[i] <= 106

Example:
Input :
1
5
1 2 4 6 10
4 5 6 9 12

Output : 
11

Explanation:
Testcase 1: After merging two arrays, sum of middle elements is 11 (5 + 6).

*/

#include<bits/stdc++.h>
#include<vector>
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
//int a[n],b[n];
 
 vector<int>v(2*n);
 for(i=0;i<2*n;i++)
 cin>>v[i];

 sort(v.begin(),v.end());
/* int m=n-1;
 cout<<v[m]<<endl;
 */
 cout<<v[n-1]+v[n]<<endl;
 }
	//code
	return 0;
}
