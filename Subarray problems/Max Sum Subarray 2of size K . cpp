/*
Max Sum Subarray of size K
Given an array of integers and a number K. Write a program to find the maximum sum of a subarray of size K.

Input:
First line of input contains a single integer T which denotes the number of test cases. Then T test cases follows. First line of each test case contains two space separated integers N and K where N denotes the number of elements. Second line of each test case contains N space separated integers which denotes the elements of the array.
Output:
For each test case print the maximum sum of a subarray of size K.

Constraints:
1<=T<=100
1<=N<=105
1<=K<=N

Example:
Input:
2
4 2
100 200 300 400
9 4
1 4 2 10 23 3 1 0 20
Output:
700
39
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
 int a[n];
 for(i=0;i<n;i++)cin>>a[i];
 int cur_sum,res=0;
 for(i=0;i<k;i++)
 res+=a[i];
 cur_sum=res;
 for(i=k;i<n;i++)
 {
     cur_sum+=a[i]-a[i-k];
     res=max(res,cur_sum);
 }
 cout<<res<<endl;
 }
	//code
	return 0;
}
