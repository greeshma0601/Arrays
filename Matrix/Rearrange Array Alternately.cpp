/*

Rearrange Array Alternately Submissions: 8716   Accuracy: 41.08%   Difficulty: Medium   Marks: 4
Associated Course(s):   Geeks Classes DSA   Geeks Classes DSA- Tutorials
      
Problems
Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on...

Note: O(1) extra space is allowed. Also, try to modify the input array as required.

Input:
First line of input conatins number of test cases T. First line of test case contain an integer denoting the array size N and second line of test case contain N space separated integers denoting the array elements.

Output:
Output the modified array with alternated elements.

Constraints:
1 <=T<= 100
1 <=N<= 107
1 <=arr[i]<= 107

Example: 
Input:
2
6
1 2 3 4 5 6
11 
10 20 30 40 50 60 70 80 90 100 110

Output:
6 1 5 2 4 3
110 10 100 20 90 30 80 40 70 50 60

Explanation:
Testcase 1: Max element = 6, min = 1, second max = 5, second min = 2, and so on... Modified array is : 6 1 5 2 4 3.
*/
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h> 
using namespace std; 

// Prints max at first position, min at second position 
// second max at third position, second min at fourth 
// position and so on. 
void rearrange(int arr[], int n) 
{ 
	// initialize index of first minimum and first 
	// maximum element 
	int max_idx = n - 1, min_idx = 0; 

	// store maximum element of array 
	int max_elem = arr[n - 1] + 1; 

	// traverse array elements 
	for (int i = 0; i < n; i++) { 
		// at even index : we have to put maximum element 
		if (i % 2 == 0) { 
			arr[i] += (arr[max_idx] % max_elem) * max_elem; 
			max_idx--; 
		} 

		// at odd index : we have to put minimum element 
		else { 
			arr[i] += (arr[min_idx] % max_elem) * max_elem; 
			min_idx++; 
		} 
	} 

	// array elements back to it's original form 
	for (int i = 0; i < n; i++) 
		arr[i] = arr[i] / max_elem; 
} 

// Driver program to test above function 
int main() 
{ 
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	cout << "Original Arrayn"; 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 

	rearrange(arr, n); 

	cout << "\nModified Array\n"; 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	return 0; 
} 

#include<stdio.h>
#include<stdlib.h>

int main()
{
long long int test_case,n,i,j,k,l;
scanf("%lld",&test_case);

while(test_case--)
{
scanf("%lld",&n);
long long int *arr = (long long int *)malloc(n*sizeof(long long int));
for(i=1;i<n;i+=2) {
    scanf("%d",&arr[i]);
    } 
    if(n%2!=0) 
    {
        for(i=n-1;i>=0;i-=2)
    {
    scanf("%d",&arr[i]);
    }
    }
else
{
for(i=n-2;i>=0;i-=2)
{
scanf("%d",&arr[i]);
}
}
for(i=0;i<n;i++) { 
    printf("%lld ",arr[i]);
    } 
    printf("\n");
    }
    return 0;
    }

 
