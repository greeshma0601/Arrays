/*
Maximize Number of 1's Submissions: 5267   Accuracy: 30.01%   Difficulty: Easy   Marks: 2
        
Problems
Given a binary array A of size N and an integer M. Find the maximum number of consecutive 1's produced by flipping at most M 0's.

Input:
The first line contains an integer T denoting the total number of test cases. In each test cases, the first line contains an integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.  Third line consists of an integer m that is maximum number of flips allowed.

Output:
Output the maximum numbers of consecutive 1's.

Constraints:
1 <= T <= 103
1 <= N <= 107
0 <= M <= N
0 <= Ai <= 1

Example:
Input:
1
11
1 0 0 1 1 0 1 0 1 1 1
2

Output:
8

Explanation:
Testcase 1: Maximum subarray is of size 8 which can be made subarray of all 1 after flipping two zeros to 1.
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// m is maximum of number zeroes allowed to flip 
// n is size of array 
void findZeroes(int arr[], int n, int m) 
{ 
    // Left and right indexes of current window 
    int wL = 0, wR = 0;  
  
    // Left index and size of the widest window  
    int bestL = 0, bestWindow = 0;  
  
    // Count of zeroes in current window 
    int zeroCount = 0;  
  
    // While right boundary of current window doesn't cross  
    // right end 
    while (wR < n) 
    { 
        // If zero count of current window is less than m, 
        // widen the window toward right 
        if (zeroCount <= m) 
        { 
            if (arr[wR] == 0) 
              zeroCount++; 
            wR++; 
        } 
  
        // If zero count of current window is more than m, 
        // reduce the window from left 
        if (zeroCount > m) 
        { 
            if (arr[wL] == 0) 
              zeroCount--; 
            wL++; 
        } 
  
        // Updqate widest window if this window size is more 
        if ((wR-wL > bestWindow) && (zeroCount<=m)) 
        { 
            bestWindow = wR-wL; 
            bestL = wL; 
        } 
    } 
  
    // Print positions of zeroes in the widest window 
    /*for (int i=bestWindow-1; i>=0; i--) 
    { 
        if (arr[bestL+i] == 0) 
           {cout << bestL+i+1 << endl;
           break;}
    }*/
    cout<<bestWindow<<endl;
} 

int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i,m;cin>>n;
 int A[n];for(i=0;i<n;i++)cin>>A[i];
cin>>m;
findZeroes(A,n,m);

 }
	//code
	return 0;
}
