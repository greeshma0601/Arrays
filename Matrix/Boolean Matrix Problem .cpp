/*
Boolean Matrix Problem Submissions: 7533   Accuracy: 36.63%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation
     
Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] is 1 (or true) then make all the cells of ith row and jth column as 1.

Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is r and c, r is the number of rows and c is the number of columns.
The second line of each test case contains all the elements of the matrix in a single line separated by a single space.

Output:
Print the modified array.

Constraints:
1 ≤ T ≤ 102
1 ≤ r, c ≤ 103
0 ≤ A[i][j] ≤ 1

Example:
Input:
3
2 2
1 0 
0 0
2 3
0 0 0 
0 0 1
4 3
1 0 0
1 0 0
1 0 0
0 0 0

Output:
1 1
1 0
0 0 1 
1 1 1
1 1 1
1 1 1
1 0 0

Explanation:
Testcase1: Since only first element of matrix has 1 (at index 1,1) as value, so first row and first column are modified to 1.


*/


/*
1) Create two temporary arrays row[M] and col[N]. Initialize all values of row[] and col[] as 0.
2) Traverse the input matrix mat[M][N]. If you see an entry mat[i][j] as true, then mark row[i] and col[j] as true.
3) Traverse the input matrix mat[M][N] again. For each entry mat[i][j], check the values of row[i] and col[j]. If any of the two values (row[i] or col[j]) is true, then mark mat[i][j] as true.

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
 int m,n,i,j;cin>>m>>n;
 int a[m][n];
 int r[m]={0};
 int s[n]={0};
 for(i=0;i<m;i++)
 for(j=0;j<n;j++)
 {
cin>>a[i][j];
 }
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
    if(a[i][j] == 1)
    {
        r[i]=1;s[j]=1;
    }
}

for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
    if(r[i] || s[j])
    {
        a[i][j]=1;    
    }
}

for(i=0;i<m;i++)
{ for(j=0;j<n;j++)
 {
cout<<a[i][j]<<" ";
}
 cout<<endl;    
 }


 }
	//code
	return 0;
}
