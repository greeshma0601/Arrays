/*
Making elements distinct Submissions: 1972   Accuracy: 22.55%   Difficulty: Basic   Marks: 1
   
Problems
Given a sorted integer array. We need to make array elements distinct by increasing values and keeping array sum minimum possible. We need to print the minimum possible sum as output.

Input:
The first line of the input contains a single integer T denoting the number of test cases. The first line of each test case contains N. followed by N separate integers. 

Output:
For each test caseprint the minimum possible sum.

Constraints:
1 ≤ T ≤ 100
2 ≤ N ≤ 10^4
1 ≤ A[i] ≤ 10^3

Example:
Input:
2
5
2 2 3 5 6
2
20 20
Output:
20
41

Explanation :
Test Case 1: We make the array as {2, 3, 4, 5, 6}. Sum becomes 2 + 3 + 4 + 5 + 6 = 20

Test Case2 : We make the array as  {20, 21 } .sum = 41
*/
/*
GFG:
// Efficient CPP program to make sorted array 
// elements distinct by incrementing elements 
// and keeping sum to minimum. 
#include <iostream> 
using namespace std; 
O(n)
// To find minimum sum of unique elements. 
int minSum(int arr[], int n) 
{ 
	int sum = arr[0], prev = arr[0]; 

	for (int i = 1; i < n; i++) { 

		// If violation happens, make current 
		// value as 1 plus previous value and 
		// add to sum. 
		if (arr[i] <= prev) { 
			prev = prev + 1; 
			sum = sum + prev; 
		} 

		// No violation. 
		else { 
			sum = sum + arr[i]; 
			prev = arr[i]; 
		} 
	} 

	return sum; 
} 

// Drivers code 
int main() 
{ 
	int arr[] = { 2, 2, 3, 5, 6 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << minSum(arr, n) << endl; 
	return 0; 
} 




//O(n^2)
// CPP program to make sorted array elements 
// distinct by incrementing elements and keeping 
// sum to minimum. 
#include <iostream> 
using namespace std; 

// To find minimum sum of unique elements. 
int minSum(int arr[], int n) 
{ 
	int sum = arr[0]; 

	for (int i = 1; i < n; i++) { 
		if (arr[i] == arr[i - 1]) {			 

			// While current element is same as 
			// previous or has become smaller 
			// than previous. 
			int j = i; 
			while (j < n && arr[j] <= arr[j - 1]) {		 
				arr[j] = arr[j] + 1; 
				j++; 
			} 
		} 
		sum = sum + arr[i]; 
	} 

	return sum; 
} 

// Driver code 
int main() 
{ 
	int arr[] = { 2, 2, 3, 5, 6 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << minSum(arr, n) << endl; 
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
 long long int n,i;
 cin>>n;
long long int a[n];
for(i=0;i<n;i++)cin>>a[i];
 for(i=1;i<n;i++)
 {
     if(a[i]==a[i-1])
     {
         a[i]=a[i]+1;
     }
     if(a[i+1]<a[i])
     {
         a[i+1]+=2;
     }
 }
 
 long long int s=0;
 for(i=0;i<n;i++)
 s+=a[i];
 cout<<s<<endl;
 }
	//code
	return 0;
}
