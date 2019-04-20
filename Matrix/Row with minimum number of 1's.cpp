/*
Row with minimum number of 1's
Determine the row index with minimum number of ones. The given 2D matrix has only zeroes and ones and also the matrix is sorted row wise. If two or more rows have same number of 1's than print the row with smallest index.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case consists of two integer n and m. The next line consists of n*m spaced integers. 

Output:
Print the index of the row with minimum number of 1's. If there is 0 number of '1' in the matrix then, print '-1'.

Constraints: 
1 <= T <= 103
1 <= n, m <= 100

Example:
Input:
2
3 3
0 0 0 0 0 0 0 0 0
4 4
0 0 0 1 0 1 1 1 0 0 1 1 0 0 1 1

Output:
-1
0

Explanation:
Testcase 2: The matrix formed for the given input will be as such
0 0 0 1
0 1 1 1
0 0 1 1
0 0 1 1
First row is having minimum number of 1 i.e. answer is 0.
 
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
 int i,j,n,m,min=0,c=0,in,f=0,pm=INT_MAX,cm;
 cin>>n>>m;int a[n][m];
 for(i=0;i<n;i++)
 for(j=0;j<m;j++)
     cin>>a[i][j];
 for(i=0;i<n;i++)
 {
     c=0;
 for(j=0;j<m;j++)
 {
     if(a[i][j] == 1)c++;
 }
 
 if(c<pm && c!=0){in=i;cm=c;pm=c;f=1;}
 
 }
 if(f)
 cout<<in<<endl;
 else 
 cout<<-1<<endl;
 }
	//code
	return 0;
}
