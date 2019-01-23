/*
Positive and negative elements Submissions: 8407   Accuracy: 39.7%   Difficulty: Basic   Marks: 1
Associated Course(s):   Geeks Classes in Noida   Geeks Classes in Noida
        
Given an array containing equal number of positive and negative elements, arrange the array such that every positive element is followed by a negative element.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an Integer N denoting size of array and the second line contains N space separated elements.

Output:
For each test case, in a new line print the arranged array.

Constraints:
1 <= T <= 300
2 <= N <= 105
-105 <= A[i] <= 105

Example:
Input:
2
6
-1 2 -3 4 -5 6
4
-3 2 -4 1
Output:
2 -1 4 -3 6 -5
2 -3 1 -4


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
 int n;
 cin>>n;int p=0,ne=0;
 int i,a[n],b[n];
 for(i=0;i<n;i++)
 cin>>a[i];
int k=0,tem;
int m;
int a1=0,b1=1;
for(i=0;i<n;i++)
{
    if(a[i]>0)
    {
        b[a1]=a[i];
        a1+=2;
    }
    if(a[i]<0)
    {
        b[b1]=a[i];
        b1+=2;
    }
}
/*sort(a,a+n);
for(i=0;i<n;i++)
{
    if(a[i]>0)
    {
     m=i;
     break;
    }
}
int u=m;
int j=0;
while(j<m && k<n)
{
    swap(a[j],a[k]);
}*/
/*for(i=0;i<n-1;i++)
{
    tem=a[i];
    a[i+1]=a[i];
    a[i]=a[i+1];
}*/
/*
 for(i=0;i<n;i++)
 {
    if(a[i]>0)
    {
        b[k++]=a[i];
        a[i]=-1;
    }
    else
    {
        ne++;
    }
 }
 for(i=0;i<n;i++)
 {
     if(a[i]!=-1)
     {
         b[k++]=a[i];
     }
 }*/
 for(i=0;i<n;i++)
 cout<<b[i]<<" ";
 cout<<endl;
 }
	//code
	return 0;
}
