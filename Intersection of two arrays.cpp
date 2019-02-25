/*
Intersection of two arrays Submissions: 6041   Accuracy: 27.49%   Difficulty: Basic   Marks: 1
            
Given two arrays with distinct elements A and B, print intersection (or common elements) of the two arrays.  If no element is common in two arrays, then print Zero.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N and M,N is the size of array A and M is size of array B.
The second line of each test case contains N input A[i].
The third line of each test case contains M input B[i].

Output:

Print the intersecting elements sorted in ascending order .If no element is common in two array, then print "Zero" without quotes.

Constraints:

1 ≤ T ≤ 50
1 ≤ N, M ≤ 100
1 ≤ A[i], B[i] ≤ 1000

Example:

Input:2
5 3
89 24 75 11 23
89 2 4
6 5
1 2 3 4 5 6
3 4 5 6 7

Output:
89
3 4 5 6
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
 
 int n1,n2,i=0;cin>>n1;cin>>n2;
 int a1[n1],a2[n2];
 for(i=0;i<n1;i++)cin>>a1[i];
 for(i=0;i<n2;i++)cin>>a2[i];
 sort(a1,a1+n1);
 sort(a2,a2+n2);
 int j=0,f=0;i=0;
while(i<n1 && j<n2)
 {
     if(a1[i]<a2[j])
     {
         i++;
        // cout<<a1[i++]<<" ";
     }
     else if(a2[j]<a1[i])
     {
         j++;
        //cout<<a2[j++]<<" "; 
     }
     else//a1[i] == a2[j];
     {
         f=1;
         cout<<a1[i++]<<" ";
         j++;
     }
 }
 /*while(i<n1)
 {
     cout<<a1[i++]<<" ";
 }
 while(j<n2)
 {
     cout<<a2[j++]<<" ";
 }*/
 if(!f)cout<<"Zero";
 cout<<endl;
 }
	//code
	return 0;
}
