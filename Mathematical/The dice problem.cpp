/*
The dice problem
You are given a cubic dice with 6 faces. All the individual faces have a number printed on them. The numbers are in the range of 1 to 6, like any ordinary dice. You will be provided with a face of this cube, your task is to guess the number on the opposite face of the cube.

Input:
The first line of the input contains a single integer T, denoting the number of testcases. Then T test case follows, a single line of the input containing a positive integer N.

Output:
For each testcase, print the number that is on the opposite side of the given face.

Constraints:
1 <= T <= 100
1 <= N <= 6

Example:
Input:
2
6
2

Output:
1
5

Explanation:
Testcase 1: For dice facing number 6 opposite face will have the number 1.

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
 cout<<abs(7-n)<<endl;
 }
	//code
	return 0;
}
