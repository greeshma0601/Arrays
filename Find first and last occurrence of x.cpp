/*
Find first and last occurrence of x Submissions: 14722   Accuracy: 34.6%   Difficulty: Basic   Marks: 1
Problems
Given a sorted array with possibly duplicate elements. The task is to find indexes of first and last occurrences of an element X in the given array.

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains an integer N denoting the size of the array. Then in the next line are N space separated values of the array. The last line of each test case contains an integer X.

Output:
For each test case in a new line print two integers separated by space denoting the first and last occurrence of the element X. If the element is not present in the array print -1.

Constraints:
1 <= T <= 100
1 <= N <= 1000
1 <= A[], X <= 1018

Example:
Input:
2
9
1 3 5 5 5 5 67 123 125
5
9
1 3 5 5 5 5 7 123 125
7

Output:
2 5
6 6

Explanation:
Testcase 1: Index of first occurrence of 5 is 2 and index of last occurrence of 5 is 5.

 

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
 int n,i,k;cin>>n;int flag=0,l,f=-1,x=-1;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 cin>>k;
 for(i=0;i<n;i++)
 {
    if(a[i] == k && flag == 0){
        f=i;flag=1;
    }   
    if(a[i] == k && flag == 1)
    {
        x=1;
        l=i;flag=1;
    }
 }
 if(f!=-1){cout<<f<<" ";
     if(x!=-1){
         cout<<l<<" ";
         
     }else{
         cout<<f<<" ";
     }
 }
 else
 {
     cout<<"-1";
     
 }
 cout<<endl;
 }
	//code
	return 0;
}
