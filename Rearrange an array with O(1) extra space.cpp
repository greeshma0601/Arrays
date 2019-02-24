/*// The function to rearrange an array in-place so that arr[i] 
// becomes arr[arr[i]]. 
void rearrange(int arr[], int n) 
{ 
    // First step: Increase all values by (arr[arr[i]]%n)*n 
    for (int i=0; i < n; i++) 
        arr[i] += (arr[arr[i]]%n)*n; 
  
    // Second Step: Divide all values by n 
    for (int i=0; i<n; i++) 
        arr[i] /= n; 
} 
 
  Rearrange an array with O(1) extra space Submissions: 6279   Accuracy: 57.01%   Difficulty: Medium   Marks: 4
      
Given an array arr[] of size n where every element is in range from 0 to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]]. This should be done with O(1) extra space.

Input:
First line contains an integer denoting the test cases 'T'. Every test case contains an integer value depicting size of array 'N' and N integer elements are to be inserted in the next line with spaces between them.

Output:
Print all elements of the array after rearranging, each separated by a space, in separate line for each test case.

Constraints:
1 <= T <= 100
1 <= N<= 107
1 <= Arr[i] <= 105
Arr[i] <= N

Example:
Input:
3
2
1 0
5
4 0 2 1 3
4
3 2 0 1

Output:
0 1
3 4 2 0 1
1 0 3 2

Explanation:
4


Testcase 1: arr[0] = 1 and arr[arr[0]] = 0. Also, arr[1] = 0 and arr[arr[1]] = 1. So, rearranging elements, we get array as, 0 1.
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
 int n,i;cin>>n;
 int a[n],k;
 for(i=0;i<n;i++)
 {
     cin>>k;
     a[i]=k;
 }
 for(i=0;i<n;i++)
 cout<<a[a[i]]<<" ";
 cout<<endl;
 }
	//code
	return 0;
}
