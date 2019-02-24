/*
Count triplets with sum smaller than X Submissions: 7477   Accuracy: 33.48%   Difficulty: Basic   Marks: 1
         
Given an array A of distinct integers and a sum value X. Find count of triplets with sum smaller than given sum value X.

Input:
First line consists of T test cases. First line of every test case consists of N and X, denoting the number of elements in array and Sum Value respectively. Second line consists of array elements.

Output:
For each testcase, output the count of Triplets.

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= Ai <= 108
1 <= X <= 1010

Example:
Input:
2
4 2
-2 0 1 3
5 12
5 1 4 3 7

Output:
2
4

Explanation:
Testcase 1: -2, 0, 1 and -2, 3, 0 makes triplets with sum less than 2.
*/
// C++ program to count triplets with sum smaller than a given value 
#include<bits/stdc++.h> 
using namespace std; 

int countTriplets(int arr[], int n, int sum) 
{ 
	// Sort input array 
	sort(arr, arr+n); 

	// Initialize result 
	int ans = 0; 

	// Every iteration of loop counts triplet with 
	// first element as arr[i]. 
	for (int i = 0; i < n - 2; i++) 
	{ 
		// Initialize other two elements as corner elements 
		// of subarray arr[j+1..k] 
		int j = i + 1, k = n - 1; 

		// Use Meet in the Middle concept 
		while (j < k) 
		{ 
			// If sum of current triplet is more or equal, 
			// move right corner to look for smaller values 
			if (arr[i] + arr[j] + arr[k] >= sum) 
				k--; 

			// Else move left corner 
			else
			{ 
				// This is important. For current i and j, there 
				// can be total k-j third elements. 
				ans += (k - j); 
				j++; 
			} 
		} 
	} 
	return ans; 
} 

// Driver program 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int  n,sum;
        cin>>n>>sum;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	/*int n = sizeof arr / sizeof arr[0]; 
	int sum = 12;*/ 
	cout << countTriplets(arr, n, sum) << endl; 
	}return 0; 
} 
