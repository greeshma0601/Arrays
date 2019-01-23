/*
Maximum Index Submissions: 51389   Accuracy: 31.25%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation
            
Given an array A of positive integers. The task is to find the maximum of j - i subjected to the constraint of A[i] <= A[j].

Input:
The first line contains an integer T, depicting total number of test cases.  Then following T lines contains an integer N depicting the size of array and next line followed by the value of array.

Output:
Print the maximum difference of the indexes i and j in a separtate line.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 107
0 ≤ A[i] ≤ 1018

Example:
Input:
1
9
34 8 10 3 2 80 30 33 1

Output:
6

Explanation:
Testcase 1:  In the given array A[1] < A[7] satisfying the required condition(A[i] <= A[j]) thus giving the maximum difference of j - i which is 6(7-1).


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
    //int i,j;
int n,i,j;
    cin>>n;
   int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    int lmin[n+1],rmax[n+1];
    lmin[n]={0};
    rmax[n]={0};
    lmin[0]=a[0];
    for(i=1;i<n;i++)
    lmin[i]=min(a[i],lmin[i-1]);
    
    rmax[n-1]=a[n-1];
    for(j=n-2;j>=0;j--)
    rmax[j]=max(a[j],rmax[j+1]);
 /*  for(i=0;i<n;i++)
    cout<<lmin[i]<<" ";
    for(i=0;i<n;i++)
    cout<<rmax[i]<<" ";*///<<endl;
    int m;
    i=0,j=0,m=-1;
    while(i<n && j<n)
    {
        if(lmin[i]<=rmax[j])
        {
            m=max(m,j-i);
            j++;
        }
   else if(lmin[i]>rmax[j]){     i++;}
    }
    cout<<m<<endl;
    
 }
	//code
	return 0;
}
