/*

Spirally traversing a matrix Submissions: 23754   Accuracy: 35.07%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation   Geeks Classes in Noida
                                 
Given a 2D matrix of size M*N. Traverse and print the matrix in spiral form.

Input: 
The first line of the input contains a single integer T, denoting the number of test cases. Then T test cases follow. Each testcase has 2 lines. First line contains M and N respectively separated by a space. Second line contains M*N values separated by spaces.

Output:
Elements when travelled in Spiral form, will be displayed in a single line.

Constraints:
1 <=T<= 100
2 <= M, N <= 10
0 <= Ai <= 100

Example:
Input:
1
4 4
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
Output:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

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
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    {
     cin>>a[i][j];   
    }
  
  
    int  k = 0, l = 0; 
  
    /*  k - starting row index 
        m - ending row index 
        l - starting column index 
        n - ending column index 
        i - iterator 
    */
  
    while (k < m && l < n) 
    { 
        /* Print the first row from the remaining rows */
        for (i = l; i < n; ++i) 
        { 
            printf("%d ", a[k][i]); 
        } 
        k++; 
  
        /* Print the last column from the remaining columns */
        for (i = k; i < m; ++i) 
        { 
            printf("%d ", a[i][n-1]); 
        } 
        n--; 
  
        /* Print the last row from the remaining rows */
        if ( k < m) 
        { 
            for (i = n-1; i >= l; --i) 
            { 
                printf("%d ", a[m-1][i]); 
            } 
            m--; 
        } 
  
        /* Print the first column from the remaining columns */
        if (l < n) 
        { 
            for (i = m-1; i >= k; --i) 
            { 
                printf("%d ", a[i][l]); 
            } 
            l++;     
        }         
    } cout<<endl;
 }
	//code
	return 0;
}
