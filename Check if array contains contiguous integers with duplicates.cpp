/*
Check if array contains contiguous integers with duplicates allowed Submissions: 11735   Accuracy: 46.8%   Difficulty: Easy   Marks: 2
          
Problems
Given an array of n integers(duplicates allowed). Print “Yes” if it is a set of contiguous integers else print “No”.


INPUT: The first line consists of an integer T i.e. the number of test cases. First line of each test case consists of an integer n, denoting the size of array. Next line consists of n spaced integers, denoting elements of array.


OUTPUT:  Print “Yes” if it is a set of contiguous integers else print “No”.

 

CONSTRAINTS:
1<=T<=100
1<=n<100000
a[i]<=105

 Example:

 2
8
5  2  3  6  4  4  6  6
7
10  14  10  12  12  13  15

Output :
 Yes
 No

Explanation:
Test Case 1 : The elements  of array form a contiguous set of integers which is {2, 3, 4, 5, 6} so the output is Yes.
Test Case 2: We are unable to form contiguous set of integers using elements of array.
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
 int n;
 cin>>n;
 int a[n],i;
 for(i=0;i<n;i++)
 cin>>a[i];

 sort(a,a+n);int f=1;

 for(i=1;i<n;i++)
 {
    
     if(a[i]==a[i-1] || a[i]-a[i-1]==1)
     {
         f=0;
         continue;
     }
     else
     {
         f=1;
         break;
     }
 }
 
 if(f)cout<<"No"<<endl;
else cout<<"Yes"<<endl;

     
 }
	//code
	return 0;
}
