/*
Maximum repeating number
Given an array A of size N, the array contains numbers in range from 0 to k-1 where k is a positive integer and k <= N. Find the maximum repeating number in this array. If there are two or more maximum repeating numbers print the element having least value.

Input:
The first line of input contains an integer T, denoting the number of test cases. T testcases follow. Each testcase contains two lines of input. First line contains N and k, both separated by a space. The next line contains N integers separated by spaces.

Output:
For each testcase, in a new line, print the maximum frequency element.

Constraints:
1 <= T <= 100
1 <= N <= 107
0 <= k <= N
0 <= Ai <= k-1

Example:
Input:

2
4 3
2 2 1 2
6 3
2 2 1 0 0 1
Output:
2
0

Explanation:

Testcase1: 2 is the most frequent element.
Testcase2: 0 1 and 2 all have same frequency of 2. But since 0 is smallest, we print that.
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
 int b[k]={0};
 for(i=0;i<n;i++)
 {
     cin>>a[i];
     b[a[i]]++;
 }
 /*for(i=0;i<k;i++)
 cout<<b[i]<<" ";*/
 //cout<<endl;
 int m=b[0];int in=0;
   for(i=1;i<k;i++)
   {
       if(m<b[i])
    {   m=b[i];in=i;}
   }
   cout<<in<<endl;
 }
	//code
	return 0;
}
