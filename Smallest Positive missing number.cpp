/* 2 approaches
Smallest Positive missing number Submissions: 21643   Accuracy: 29.41%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation   Geeks Classes DSA More
               
Problems
Discussions
You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.
Note: Expected solution in O(n) time using constant extra space.

Input:
First line consists of T test cases. First line of every test case consists of N, denoting the number of elements in array. Second line of every test case consists of elements in array.

Output:
Single line output, print the smallest positive number missing.

Constraints:
1 <= T <= 100
1 <= N <= 106
-106 <= arr[i] <= 106

Example:
Input:
2
5
1 2 3 4 5
5
0 -10 1 3 -20
Output:
6
2

Explanation:
Testcase 1: Smallest positive missing number is 6.
Testcase 2: Smallest positive missing number is 2.

*/


using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	     int arr[n],i;
	    unordered_map<int,int> umap;
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]>0)
	        umap[arr[i]]++;
	    }
	    for(i=1;i<1000000;i++)
	    {
	        if(umap[i]==0)
	        break;
	    }
	    
	    cout<<i<<endl;
	    
	}
	return 0;
}













#include<iostream>
using namespace std;
void swap(int *a, int *b) 
{ 
    int temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
} 
  
/* Utility function that puts all 
non-positive (0 and negative) numbers on left  
side of arr[] and return count of such numbers */
int segregate (int arr[], int size) 
{ 
    int j = 0, i; 
    for(i = 0; i < size; i++) 
    { 
    if (arr[i] <= 0)  
    { 
        swap(&arr[i], &arr[j]); 
        j++; // increment count of non-positive integers 
    } 
    } 
  
    return j; 
} 
  
/* Find the smallest positive missing number  
in an array that contains all positive integers */
int findMissingPositive(int arr[], int size) 
{ 
int i; 
  
// Mark arr[i] as visited by making arr[arr[i] - 1] negative.  
// Note that 1 is subtracted because index start  
// from 0 and positive numbers start from 1 
for(i = 0; i < size; i++) 
{ 
    if(abs(arr[i]) - 1 < size && arr[ abs(arr[i]) - 1] > 0) 
    arr[ abs(arr[i]) - 1] = -arr[ abs(arr[i]) - 1]; 
} 
  
// Return the first index value at which is positive 
for(i = 0; i < size; i++) 
    if (arr[i] > 0) 
    // 1 is added because indexes start from 0 
    return i+1;  
  
return size+1; 
} 
  
/* Find the smallest positive missing  
number in an array that contains 
both positive and negative integers */
int findMissing(int arr[], int size) 
{ 
// First separate positive and negative numbers 
int shift = segregate (arr, size); 
  
// Shift the array and call findMissingPositive for 
// positive part 
return findMissingPositive(arr+shift, size-shift); 
} 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        cin>>arr[i];
        int missing = findMissing(arr,n); 
        cout<<missing<<endl;
    }
	return 0;
}
