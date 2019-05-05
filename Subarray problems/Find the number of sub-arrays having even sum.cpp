/*
Find the number of sub-arrays having even sum Submissions: 1828   Accuracy: 53.56%   Difficulty: Easy   Marks: 2
     
Problems
Given an array  A[]  you have to  find the number of subarrays whose sum is an even number.
 

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. 
The first line  of each test case contains an integer N, where N is the size of the array A[ ] .
Then Next line contains space seperated N value of the array A[ ].


Output:
For each test case in a new line, number of sub-arrays having even sum
 

Constraints:
1 <= T <= 200
1 <= N <= 100
1<= A[i] <=100

 

Example:

Input:
1
6
1 2  2  3  4 1

Output:
9
 

Explanation:
In the first test case the array  {1, 2, 2, 3, 4, 1} has 9 such possible subarrays-

These are-

 {1, 2, 2, 3}          Sum = 8

 {1, 2, 2, 3, 4}      Sum as  = 12

 {2}                      Sum as  = 2 (At index 1)

 {2, 2}                  Sum as Sum = 4

 {2, 2, 3, 4, 1}      Sum as = 12

 {2}                      Sum as  = 2 (At index 2)

 {2, 3, 4, 1}          Sum as = 10

 {3, 4, 1}              Sum as  = 8

 {4}                      Sum as = 4

*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
  
int countEvenSum(int arr[], int n) 
{ 
    // A temporary array of size 2. temp[0] is 
    // going to store count of even subarrays 
    // and temp[1] count of odd. 
    // temp[0] is initialized as 1 because there 
    // a single even element is also counted as 
    // a subarray 
    int temp[2] = {1, 0}; 
  
    // Initialize count.  sum is sum of elements 
    // under modulo 2 and ending with arr[i]. 
    int result = 0, sum = 0; 
  
    // i'th iteration computes sum of arr[0..i] 
    // under modulo 2 and increments even/odd count 
    // according to sum's value 
    for (int i=0; i<=n-1; i++) 
    { 
        // 2 is added to handle negative numbers 
        sum = ( (sum + arr[i]) % 2 + 2) % 2; 
  
        // Increment even/odd count 
        temp[sum]++; 
    } 
  
    // Use handshake lemma to count even subarrays 
    // (Note that an even cam be formed by two even 
    // or two odd) 
    result = result + (temp[0]*(temp[0]-1)/2); 
    result = result + (temp[1]*(temp[1]-1)/2); 
  
    return (result); 
} 
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;cin>>n;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 cout<<countEvenSum(a,n)<<endl;
     
 }
	//code
	return 0;
}
