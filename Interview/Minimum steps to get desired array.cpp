/*
Minimum steps to get desired array Submissions: 2717   Accuracy: 46.04%   Difficulty: Medium   Marks: 4
     
Problems
Consider an array with n elements and value of all the elements is zero. We can perform following operations on the array.

 1. Incremental operations: Choose 1 element from the array and increment its value by 1.
 2. Doubling operation: Double the values of all the elements of array.

Given an array of integers of size N. Print the smallest possible number of operations needed to change the array from all zeros to desired array.


Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is an integer N  where N is the size of array .
The second line of each test case contains N input A[i].

Output:
Print the smallest possible number of the operations needed to change the array from all zeros to desired array.

Constraints:
1 ≤ T ≤ 50
1 ≤ N ≤ 100
1 ≤ A[i] ≤ 200

Example:

Input:
3
3
16 16 16
2 
2 3
2 
2 1

Output:
7
4
3

Explanation : 
In first test case, the output solution looks as follows. First apply an incremental operation to each element. Then apply the doubling operation four times. Total number of operations is 3+4 = 7

In second test case, to get the target array from {0, 0}, we first increment both elements by 1 (2 operations), then double the array (1 operation). Finally increment second element (1 more operation)  Total number of operations is 2+1+1 = 4

In third test case , one of the optimal solution is to apply the incremental operation 2 times to first and once on second element.Total number of operations is 1+1+1 = 3

*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// Returns count of minimum operations to covert a 
// zero array to target array with increment and 
// doubling operations. 
// This function computes count by doing reverse 
// steps, i.e., convert target to zero array. 
int countMinOperations(unsigned int target[], int n) 
{ 
    // Initialize result (Count of minimum moves) 
    int result = 0; 
  
    // Keep looping while all elements of target 
    // don't become 0. 
    while (1) 
    { 
        // To store count of zeroes in current 
        // target array 
        int zero_count = 0; 
  
        int i;  // To find first odd element 
        for (i=0; i<n; i++) 
        { 
            // If odd number found 
            if (target[i] & 1) 
                break; 
  
            // If 0, then increment zero_count 
            else if (target[i] == 0) 
                zero_count++; 
        } 
  
        // All numbers are 0 
        if (zero_count == n) 
          return result; 
  
        // All numbers are even 
        if (i == n) 
        { 
            // Divide the whole array by 2 
            // and increment result 
            for (int j=0; j<n; j++) 
               target[j] = target[j]/2; 
            result++; 
        } 
  
        // Make all odd numbers even by subtracting 
        // one and increment result. 
        for (int j=i; j<n; j++) 
        { 
           if (target[j] & 1) 
           { 
              target[j]--; 
              result++; 
           } 
        } 
    } 
} 
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;cin>>n;
unsigned int a[n];for(i=0;i<n;i++)cin>>a[i];
 cout<< countMinOperations(a, n) <<endl;
 }
	//code
	return 0;
}
