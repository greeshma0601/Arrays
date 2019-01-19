/*
Pythagorean Triplet Submissions: 32331   Accuracy: 38.09%   Difficulty: Basic   Marks: 1
Associated Course(s):   Geeks Classes in Noida   Geeks Classes in Noida More
        
Given an array of integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2.

Input:
The first line contains 'T' denoting the number of testcases. Then follows description of testcases.
Each case begins with a single positive integer N denoting the size of array.
The second line contains the N space separated positive integers denoting the elements of array A.

Output:
For each testcase, print "Yes" or  "No" whtether it is Pythagorean Triplet or not (without quotes).

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= A[i] <= 1000

Example:
Input:
1
5
3 2 4 6 5
Output:
Yes

Explanation:
For testcase1: a=3, b=4, and c=5 forms a pythagorean triplet, so we print "Yes"

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
     int i,n;
     cin>>n;
     int a[n];
     for(i=0;i<n;i++)
     cin>>a[i];
     sort(a,a+n);
     for(i=0;i<n;i++)
     a[i]=a[i]*a[i];
     int f=1;
     for(i=n-2;i>=0;i--)
     {
         int l=0;
         int r=n-1;
         while(l<r)
         {
             if(a[l]+a[r]==a[i])
             {cout<<"Yes"<<endl;
             f=0;
             break;}
             if(a[l]+a[r]<a[i]){l++;} else {r--;}
         }
         if(f==0)break;
     }
  if(f==1)cout<<"No"<<endl;
 }
	//code
	return 0;
}
