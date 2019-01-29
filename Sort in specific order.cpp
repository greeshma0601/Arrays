/*
Sort in specific order
Given an array A of positive integers. Your task is to sort them in such a way that the first part of the array contains odd numbers sorted in descending order, rest portion contains even numbers sorted in ascending order.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer N denoting the size of the array. The next line contains N space separated values of the array.

Output:
For each test case in a new line print the space separated values of the modified array.

Constraints:
1 <= T <= 103
1 <= N <= 107
0 <= Ai <= 1018

Example:
Input:
2
7
1 2 3 5 4 7 10
7
0 4 5 3 7 2 1

Output:
7 5 3 1 2 4 10
7 5 3 1 0 2 4

Explanation:
Testcase1: Array elements 7 5 3 1 are odd and sorted in descending order, whereas 2 4 10 are even numbers and sorted in ascending order.
*/


#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
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
 vector<int> v1;
 vector<int> v2;
 for(i=0;i<n;i++)
 {
     cin>>a[i];
     if((a[i]%2) == 0)
     {
      v1.push_back(a[i]);  
     }
     else 
     {
         v2.push_back(a[i]);
     }
    
 }
  sort(v1.begin(),v1.end());
     sort(v2.begin(),v2.end());
    // cout<<v1<<endl;
    // cout<<v2<<endl;
    int l1=v1.size();
     int l2=v2.size();
     for(i=l2-1;i>=0;i--)
     cout<<v2[i]<<" ";
     for(i=0;i<l1;i++)
     cout<<v1[i]<<" ";
     cout<<endl;
 /*sort(a,a+n);
 int b[c1],c[c2];
 int k=0,j=c2-1;*/
 /*for(i=0;i<n;i++)
 {
     if(a[i]%2 == 0)c[j--]=a[i];
     else{b[k++]=a[i];}
 }
 
    for(i=k-1;i>=0;i--)
    cout<<b[i]<<" ";
    for(i=c2-1;i>=1;i--)
    cout<<c[i]<<" ";
    cout<<endl;*/
 }

	//code
	return 0;
}
