/*
LCM of given array elements
Given an array A[ ] of N numbers, your task is to find LCM of it.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow . The first line of each test case contains an integer N denoting the number of array elements. The next line contains N space separated values of  array A[ ] .

Output:
For each test case in a new line print the lcm of the elements of the array .

Constraints:
1<=T<=100
1<=N<=20
1<=A[ ] <=20

Example:
Input
1
4
1 2 8 3

Output
24
*/

#include<bits/stdc++.h>
#include<iostream>
#include<boost/math/common_factor.hpp>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i,res;cin>>n;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 res=a[0];
 for(i=1;i<n;i++)
 {
    res=boost::math::lcm(res,a[i]);
 }
 cout<<res<<endl;
 }
	//code
	return 0;
}
