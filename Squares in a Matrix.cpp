/*
Squares in a Matrix
Given a MxN matrix, count the number of squares in the matrix.squaresinREct

Input:

The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains two space seperated integers M and N, denoting the size of the Matrix.
Output:

For each test output a single integer denoting the total number of squares.
Constraints:

1<=T<=102
1<=M,N<=10^4

Example:

Input:

2
2 2
4 3

Output:

5
20
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
long long int ns(long long int n,long long int m)
{
    if(m>n)swap(m,n);
    return (m*(m+1)*(2*m+1)/6) + (n-m) *m * (m + 1) / 2;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 long long int n,m;
 cin>>n>>m;
 cout<<ns(n,m)<<endl;
 }
	//code
	return 0;
}
