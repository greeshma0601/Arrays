/*
Sum of bit differences Submissions: 6023   Accuracy: 65.18%   Difficulty: Medium   Marks: 4
         
Problems
Write a program to find the sum of bit differences in all pairs that can be formed from array elements n. Bit difference of a pair (x, y) is a count of different bits at same positions in binary representations of x and y. For example, bit difference for 2 and 7 is 2. Binary representation of 2 is 010 and 7 is 111 ( first and last bits differ in two numbers).

Input: The first line of input contains an integer T denoting the number of test cases. First line of the test case will contain an array of elements n.
Output: The sum of bit differences of all pairs that can be formed by given array.
Constraints:

1 <=T<= 100

1 <=N<= 10

1 <=a[i]<= 10
Example:

Input:

2
2 
1 2
3 
1 3 5

Output:

4
8
*/
/*
https://www.geeksforgeeks.org/sum-of-bit-differences-among-all-pairs/
// C++ program to compute sum of pairwise bit differences 
#include <bits/stdc++.h> 
using namespace std; 

int sumBitDifferences(int arr[], int n) 
{ 
	int ans = 0; // Initialize result 

	// traverse over all bits 
	for (int i = 0; i < 32; i++) 
	{ 
		// count number of elements with i'th bit set 
		int count = 0; 
		for (int j = 0; j < n; j++) 
			if ( (arr[j] & (1 << i)) ) 
				count++; 

		// Add "count * (n - count) * 2" to the answer 
		ans += (count * (n - count) * 2); 
	} 

	return ans; 
} 

// Driver prorgram 
int main() 
{ 
	int arr[] = {1, 3, 5}; 
	int n = sizeof arr / sizeof arr[0]; 
	cout << sumBitDifferences(arr, n) << endl; 
	return 0; 
} 

*/
#include<iostream>
using namespace std;
int main()
 {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    int bitDiff = 0;
	    for(int i=0; i<n; i++){
	        for(int j=0; j<n; j++){
	            int x = a[i]^a[j];
	            bitDiff += __builtin_popcount(x);// To count number of set bits
	            
	        }
	    }
	    cout<<bitDiff<<endl;
	}
	return 0;
}
