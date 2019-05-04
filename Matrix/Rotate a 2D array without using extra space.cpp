/*
Rotate a 2D array without using extra space Submissions: 8293   Accuracy: 58.75%   Difficulty: Medium   Marks: 4
          
Problems
You are given an n x n 2D matrix representing an image.

Rotate the image by 90 degrees (clockwise).

You need to do this in place.

Note that if you end up using an additional array, you will only receive partial score.

Example:

If the array is 

1 2 3 4 5 6 7 8 9

Then the rotated array becomes: 

7 4 1 8 5 2 9 6 3

Input:

The first line contains an integer 'T' denoting the total number of test cases.
In each test cases, the first line contains an integer 'N' denoting the size of the 2D square matrix.

And in the second line, the elements of the matrix A[][], each separated by a space in row major form.


Output:

For each test case, print the elements of the rotated array row wise, each element separated by a space. Print the output of each test case in a new line.


Constraints:

1 ≤ T ≤ 70
1 ≤ N ≤ 10
1 ≤ A [ i ][ j ] ≤ 100


Example:

Input:

2
3
1 2 3 4 5 6 7 8 9
2
56 96 91 54

Output:

7 4 1 8 5 2 9 6 3
91 56 54 96

 
*/
/*O(1)space:
// C++ program for left rotation of matrix by 90 
// degree without using extra space 
#include <bits/stdc++.h> 
using namespace std; 
#define R 4 
#define C 4 

// After transpose we swap elements of column 
// one by one for finding left rotation of matrix 
// by 90 degree 
void reverseColumns(int arr[R][C]) 
{ 
	for (int i = 0; i < C; i++) 
		for (int j = 0, k = C - 1; j < k; j++, k--) 
			swap(arr[j][i], arr[k][i]); 
} 

// Function for do transpose of matrix 
void transpose(int arr[R][C]) 
{ 
	for (int i = 0; i < R; i++) 
		for (int j = i; j < C; j++) 
			swap(arr[i][j], arr[j][i]); 
} 

// Function for print matrix 
void printMatrix(int arr[R][C]) 
{ 
	for (int i = 0; i < R; i++) { 
		for (int j = 0; j < C; j++) 
			cout << arr[i][j] << " "; 
		cout << '\n'; 
	} 
} 

// Function to anticlockwise rotate matrix 
// by 90 degree 
void rotate90(int arr[R][C]) 
{ 
	transpose(arr); 
	reverseColumns(arr); 
} 

// Driven code 
int main() 
{ 
	int arr[R][C] = { { 1, 2, 3, 4 }, 
					{ 5, 6, 7, 8 }, 
					{ 9, 10, 11, 12 }, 
					{ 13, 14, 15, 16 } }; 
	rotate90(arr); 
	printMatrix(arr); 
	return 0; 
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
 int n;
 cin>>n;
 int a[n][n];
 int i,j;
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 cin>>a[i][j];
 for(j=0;j<n;j++)
 for(i=n-1;i>=0;i--)
 cout<<a[i][j]<<" ";
 cout<<endl;
 }
	//code
	return 0;
}
