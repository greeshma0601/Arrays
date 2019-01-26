/*
Floor in a Sorted Array Submissions: 11249   Accuracy: 41.33%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation   Geeks Classes in Noida   Geeks Classes in Noida   Sudo Placement [IITs] Less
        
Given a sorted array arr[] without duplicates, and a value x. Find the floor of x in given array.
Floor of x is defined as the largest element K in arr[] such that K is smaller than or equal to x.

Input:
First line of input contains number of testcases T. For each testcase, first line of input contains number of elements in the array and element whose floor is to be searched. Last line of input contains array elements.

Output:
Output the index of floor of x if exists, else print -1.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 107
1 ≤ arr[i] ≤ 1018
0 ≤ X ≤ arr[n-1]

Example:
Input:
3
7 0
1 2 8 10 11 12 19
7 5
1 2 8 10 11 12 19
7 10
1 2 8 10 11 12 19

Output:
-1
1
3

Explanation:
Testcase 1: No element less than 0 is found. So output is "-1".
Testcase 2: Number less than 5 is 2, whose index is 1(0-based indexing).

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
 long long int i,fx,n,x,k,f;
 cin>>n>>x;
 long long int a[n];
 for(i=0;i<n;i++)
 cin>>a[i];
 long long int y;
     
     int j;
     if(a[0]>x)
     {
         f=0;
         y=-1;
         cout<<"-1"<<endl;
         //goto l1;
         //break;
     }
     else{
 for(i=0;i<n;i++)
 {
     
     if(a[i]<=x)
     {
         //j=a[i];
        // f=1;
         y=i;
         //break;
     }
 }
  cout<<y<<endl;
     }
/*l1:if(f == 0){cout<<"-1"<<endl;}
 else*/

 
 
 }
	//code
	return 0;
}

