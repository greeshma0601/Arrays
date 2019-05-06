/*
Palindromic Array
You are given an array A of size N. Your task is to find the minimum number of operations needed to convert the given array to 'Palindromic Array'.

Palindromic Array:
[23,15,23] is a ‘Palindromic Array’ but [2,0,1] is not.

The only allowed operation is that you can merge two adjacent elements in the array and replace them with their sum.

Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N, where N is the size of array.
The second line of each test case contains N space separated integers which is the input for the array.

Output:
Output the minimum number of operations required to make the given array a palindromic array.

Constraints:
1<=T<=100
1<=N<=100

Example:
Input:
2
5
3 2 3 3 5
4
5 3 3 4
Output:
1
3

Explanation:
For Test Case 1: [3 2 3 3 5] after merging the 1st two elements 3 and 2, we get the array as [5 3 3 5] which is a palindrome, hence only 1 operation is needed.
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// Returns minimum number of count operations 
// required to make arr[] palindrome 
int findMinOps(int arr[], int n) 
{ 
    int ans = 0; // Initialize result 
  
    // Start from two corners 
    for (int i=0,j=n-1; i<=j;) 
    { 
        // If corner elements are same, 
        // problem reduces arr[i+1..j-1] 
        if (arr[i] == arr[j]) 
        { 
            i++; 
            j--; 
        } 
  
        // If left element is greater, then 
        // we merge right two elements 
        else if (arr[i] > arr[j]) 
        { 
            // need to merge from tail. 
             
            arr[j-1] += arr[j] ;
            j--;
            ans++; 
        } 
  
        // Else we merge left two elements 
        else
        { 
             
            arr[i+1] += arr[i];
            i++;
            ans++; 
        } 
    } 
  
    return ans; 
} 
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;cin>>n;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 cout<<findMinOps( a, n)<<endl; 
     
 }
	//code
	return 0;
}
