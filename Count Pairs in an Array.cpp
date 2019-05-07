/*
Count Pairs in an Array
Given an array of integers arr[0..n-1], count all pairs (arr[i], arr[j]) in it such that i*arr[i] > j*arr[j], 0 =< i < j < n.

Example:

Input: arr[] = {5, 0, 10, 2, 4, 1, 6}

Output: 5

Explanation:

Pairs which hold condition i*arr[i] > j*arr[j] are
(10, 2) (10, 4) (10, 1) (2, 1) (4, 1)
Input:

The first line of input contains T denoting the no. of test cases . Then T test cases follow . The first line of each test case contains an Integer N and the next line contains N space separated values of the array A[ ] .


Output:

For each test case output the required result in a new line.


Constraints:

1<=T<=100
1<=N<=100
1<=A[ ] <=1000


Example:

Input:

2

7

5 0 10 2 4 1 6

4

8 4 2 1

Output:

5

2
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
 int n,i,j;cin>>n;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 int r,c=0;
 for(i=0;i<n-1;i++)
 for(j=i+1;j<n;j++)
 {
     if(a[i]*i>a[j]*j)
     {
         c++;
     }
     
 }
 cout<<c<<endl;
 }
	//code
	return 0;
}
