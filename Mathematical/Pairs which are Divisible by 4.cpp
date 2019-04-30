https://www.geeksforgeeks.org/count-pairs-array-whose-sum-divisible-4/

/*
Pairs which are Divisible by 4 Submissions: 2522   Accuracy: 57.52%   Difficulty: Easy   Marks: 2
     
Problems
Given an array if ‘n’ positive integers, count number of pairs of integers in the array that have the sum divisible by 4.

Input:

The first line of the input contains a single integer T, denoting the number of test cases. Then T test case follows. Each test-case has two lines of the input, the first line contains an integer denoting the size of an array N and the second line of input contains N positive integers.
Output:

Print the number of pairs of integers in the array that have the sum divisible by 4. 
Constraints:

1<=T<=100

1<=N<=100

1<=arr[]<=1000
Example:

Input:

2

5

2 2 1 7 5

5

2 2 3 5 6

Output:

3

4

Explanation:

Testcase 1: (2,2), (1,7) and(7,5) are the 3 pairs.

Testcase 2: (2,2), (2,6), (2,6), (3,5) are the 4 pairs.
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// Program to count pairs whose sum divisible 
// by '4' 
int count4Divisibiles(int arr[], int n) 
{ 
    // Create a frequency array to count  
    // occurrences of all remainders when  
    // divided by 4 
    int freq[4] = {0, 0, 0, 0}; 
  
    // Count occurrences of all remainders 
    for (int i = 0; i < n; i++) 
        ++freq[arr[i] % 4]; 
  
    // If both pairs are divisible by '4' 
    int ans = freq[0] * (freq[0] - 1) / 2; 
  
    // If both pairs are 2 modulo 4 
    ans += freq[2] * (freq[2] - 1) / 2; 
  
    // If one of them is equal 
    // to 1 modulo 4 and the 
    // other is equal to 3  
    // modulo 4 
    ans += freq[1] * freq[3]; 
  
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
 cout<<count4Divisibiles(a, n) <<endl;
 }
	//code
	return 0;
}
