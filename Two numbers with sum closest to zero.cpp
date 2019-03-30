/*
Two numbers with sum closest to zero Submissions: 15353   Accuracy: 29.03%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
             
Problems
Given an integer array A of N elements. You need to find the sum of two elements such that sum is closest to zero.

Input:
The first line of input contains an integer T denoting the number of test cases.  
The first line of each test case is N, denoting the size of array. Each test case consist of a N integers which are the array elements.

Output:
Print the requiired sum which is closest to zero.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 103
-106 ≤ a[i] ≤ 106

Example:
Input:
3
3
-8 -66 -60  
6
-21 -67 -37 -18 4 -65  
2
-24 -73

Output:
-68
-14
-97

Explanation:
Testcase 1: Sum of two elements closest to zero is -68 using numbers -60 and -8.

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;cin>>n;
 int a[n];
 for(i=0;i<n;i++)cin>>a[i];
 sort(a,a+n);
 
 int sum=INT_MAX,rs=INT_MAX;
 int l=0,r=n-1;
 while(l<r)
 {
      rs=a[l]+a[r];
     if(abs(rs)<abs(sum))
     {
         sum=rs;
     }
     if(rs<0){
         l++;
     }
     else
     {
         r--;
     }
 }
 cout<<sum<<endl;
 }
	//code
	return 0;
}
