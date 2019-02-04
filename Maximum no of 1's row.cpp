/*
Maximum no of 1's row Submissions: 5780   Accuracy: 49.3%   Difficulty: Easy   Marks: 2
             
Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.

Example
Input matrix
0 1 1 1
0 0 1 1
1 1 1 1  // this row has maximum 1s
0 0 0 0

Output: 2

Input:
The first line of input is an integer T denoting the no of test cases.Then T test cases follow. Each test case consists of 2 lines . The first line of each test case is are two integers row and col denoting the no of rows and columns of matrix . Then in the next line are row*col space separated values of the matrix M.

Output:
For each test case in a new line print the required first row index .

Constraints:
1<=T<=20
1<=row,col<=40
0<=M[ ][ ]<=1

Example:
Input:
2
3 4
0 1 1 1 0 0 1 1 0 0 1 1
2 2
0 1 1 1
 
Output:
0
1
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
 int i,j,m,n;
 cin>>m>>n;
 int a[m][n];
 int max=0,c=0,index=0;
 for(i=0;i<m;i++)
 for(j=0;j<n;j++)
 {
     cin>>a[i][j];
 }
 for(i=0;i<m;i++)
 {
      //c=0;
     for(j=0;j<n ;j++)
     {
         if(a[i][j] == 1)
        {
         c=n-j;

    break;
    }//cout<<c<<" ";
     }//if(i==0){cout<<c<<endl;}
     if(max<c){max=c;index=i;}
 
 }
  cout<<index<<endl;    

 }
	//code
	return 0;
}
