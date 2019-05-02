/*
https://www.geeksforgeeks.org/count-subarrays-equal-number-1s-0s/
Subarrays with equal 1s and 0s Submissions: 1898   Accuracy: 31.53%   Difficulty: Medium   Marks: 4
Associated Course(s):   Geeks Classes DSA   Geeks Classes in Noida   Geeks Classes DSA- Tutorials Less
     
Problems
Given an array arr[] of size N containing 0s and 1s only. The task is to count the subarrays having equal number of 0s and 1s.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an Integer N denoting size of array and the second line contains N space separated 0 and 1.

Output:
For each test case, print the count of required sub arrays in new line.

Constraints:
1 <= T <= 100
1 <= N <= 106
0 <= A[i] <= 1

Example:
Input:
2
7
1 0 0 1 0 1 1
5
1 1 1 1 0

Output:
8
1

Explanation:
Testcase 1: The index range for the 8 sub-arrays are: 
(0, 1), (2, 3), (0, 3), (3, 4), (4, 5) 
(2, 5), (0, 5), (1, 6) 
 
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
/*int countSubarrWithEqualZeroAndOne(int arr[], int n){ 
unordered_map<int,int> mp; 
int sum=0; 
int count=0; 
for (int i = 0; i < n; i++) { 
			//Replacing 0's in array with -1 
			if (arr[i] == 0) 
				arr[i] = -1; 

			sum += arr[i]; 

			//If sum = 0, it implies number of 0's and 1's are 
			//equal from arr[0]..arr[i] 
			if (sum == 0) 
				count++; 

			if (mp[sum]) 
				count += mp[sum]; 
			if(mp[sum]==0) 
				mp[sum]=1; 
			else
				mp[sum]++; 

		} 
return count; 
}*/
// function to count subarrays with 
// equal number of 1's and 0's 
int countSubarrWithEqualZeroAndOne(int arr[], int n) 
{ 
    // 'um' implemented as hash table to store 
    // frequency of values obtained through 
    // cumulative sum 
    unordered_map<int, int> um; 
    int curr_sum = 0; 
  
    // Traverse original array and compute cumulative 
    // sum and increase count by 1 for this sum 
    // in 'um'. Adds '-1' when arr[i] == 0 
    for (int i = 0; i < n; i++) { 
        curr_sum += (arr[i] == 0) ? -1 : arr[i]; 
        um[curr_sum]++; 
    } 
  
    int count = 0; 
    // traverse the hash table 'um' 
    for (auto itr = um.begin(); itr != um.end(); itr++) { 
  
        // If there are more than one prefix subarrays 
        // with a particular sum 
        if (itr->second > 1) 
            count += ((itr->second * (itr->second - 1)) / 2); 
    } 
  
    // add the subarrays starting from 1st element and 
    // have equal number of 1's and 0's 
    if (um.find(0) != um.end()) 
        count += um[0]; 
  
    // required count of subarrays 
    return count; 
} 
  
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;cin>>n;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 cout<<countSubarrWithEqualZeroAndOne(a,n)<<endl;
 }
	//code
	return 0;
}
