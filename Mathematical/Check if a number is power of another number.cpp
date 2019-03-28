/*
Check if a number is power of another number
Given two positive numbers x and y, check if y is a power of x or not.

Input:
First line contains an integer, the number of test cases 'T'. Each test case should contain two positive numbers x and y.


Output:
Print 1 if y is a power of x, else print 0.


Constraints: 
1<=T<=30
1<=x<=103
1<=y<=108


Example:
Input:
2
2 8
1 3

Output:
1
0

Explanation: 8 is a power of 2, but 3 is not a power of 1.
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool check(int x,int y)
{
    int r1=log(y)/log(x);
    double r2=log(y)/log(x);
    return (r1 == r2);
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 int x,y;
 cin>>x>>y;

 cout<<check(x,y)<<endl;
 }
	//code
	return 0;
}
