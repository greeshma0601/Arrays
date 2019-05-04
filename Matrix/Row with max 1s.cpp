/*
Row with max 1s Submissions: 8086   Accuracy: 33.8%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation
        
Problems
Given a boolean 2D array where each row is sorted. Find the row with the maximum number of 1s.

Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case contains n and m, where n is the number of rows and m is the number of columns. The second line of each test case contains the array elements.

Output:
Print the row with the maximum number of 1s.

Constraints:
1 ≤ T ≤ 50
1 ≤ n,m ≤ 103

Example:
Input:
1
4 4
0 1 1 1 0 0 1 1 1 1 1 1 0 0 0 0

Output:
2

Explanation :
Testcase 1 : Row 2 is having maximum number of 1s (0-based indexing).
*/
/*
O(m+n)
// The main function that returns index of row with maximum number of 1s. 
int rowWithMax1s(bool mat[R][C]) 
{ 
	// Initialize first row as row with max 1s 
	int max_row_index = 0; 

	// The function first() returns index of first 1 in row 0. 
	// Use this index to initialize the index of leftmost 1 seen so far 
	int j = first(mat[0], 0, C-1); 
	if (j == -1) // if 1 is not present in first row 
	j = C - 1; 

	for (int i = 1; i < R; i++) 
	{ 
		// Move left until a 0 is found 
		while (j >= 0 && mat[i][j] == 1) 
		{ 
		j = j-1; // Update the index of leftmost 1 seen so far 
		max_row_index = i; // Update max_row_index 
		} 
	} 
	return max_row_index; 
} 

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
 int i,j,n,m;
 cin>>n>>m;
 int a[n][m];
 for(i=0;i<n;i++)
 for(j=0;j<m;j++)
 {
     cin>>a[i][j];
     
 }
 int in,mx=INT_MAX,res;
 for(i=0;i<n;i++)
 {
     for(j=0;j<m;j++)
     {
         if(a[i][j] == 1)
         {
             in=j;
             break;
         }
     }
     if(in<mx)
     {mx=in;res=i;}
 }
 cout<<res<<endl;
 }
	//code
	return 0;
}
