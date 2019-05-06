/*
Subarray with least average Submissions: 3628   Accuracy: 23.44%   Difficulty: Easy   Marks: 2
   
Problems
Find the subarray with least average of size K. Given an array arr[] of size n and integer k such that k <= n.

Input:
The first line contains an integer 'T' denoting the total number of test cases. In each test cases, the first line contains an integer 'N' and 'K' denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.


Output:
The first and last index of the subarray. (Index begins from 1).

Note: You may assume that there will only be one unique solution.


Constraints:
1<=T<=30
1<=N<=1000
1<=K<=N
1<=A[i]<=103

Example:
Input:
1
3 1
30 20 10 

Output:
3 3
*/
#include <iostream>
using namespace std;
#define ll double
// Prints beginning and ending indexes of subarray 
// of size k with minimum average 
void find(int arr[], int n, int k) 
{ 
    // k must be smaller than or equal to n 
   /* if (n < k) 
        return; */
  
    // Initialize  beginning index of result 
    int res_index = 1; 
  
    // Compute sum of first subarray of size k 
    int curr_sum = 0; 
    for (int i = 0; i < k; i++) 
        curr_sum += arr[i]; 
  
    // Initialize minimum sum as current sum 
    int min_sum = curr_sum; 
  
    // Traverse from (k+1)'th element to n'th element 
    for (int i = k; i < n; i++) { 
        // Add current item and remove first item of 
        // previous subarray 
        curr_sum += arr[i] - arr[i - k]; 
  
        // Update result if needed 
        if (curr_sum < min_sum) { 
            min_sum = curr_sum; 
            res_index = (i - k + 2); 
        } 
    } 
  
    cout  << res_index <<" "
         << res_index + k-1  ; 
} 
  
int main() {
int t,n,arr[1000];
int k,i;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;

	    for(i=0;i<n;i++)
	       cin>>arr[i];
	    find(arr,n,k);
	    l1:cout<<"\n";
	}
	return 0;
}
