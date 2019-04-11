/*
Rightmost different bit Submissions: 5335   Accuracy: 73.11%   Difficulty: Basic   Marks: 1
Associated Course(s):   Geeks Classes DSA   Geeks Classes in Noida   Geeks Classes DSA- Tutorials Less
    
Problems
Given two numbers M and N. The task is to find the position of rightmost different bit in binary representation of numbers.

Input:
The input line contains T, denoting the number of testcases. Each testcase follows. First line of each testcase contains two space separated integers M and N.

Output:
For each testcase in new line, print the position of rightmost different bit in binary representation of numbers. If both M and N are same then print -1 in this case.

Constraints:
1 <= T <= 100
1 <= M <= 103
1 <= N <= 103

Example:
Input:
2
11 9
52 4

Output:
2
5

Explanation:
Tescase 1: Binary representaion of the given numbers are: 1011 and 1001, 2nd bit from right is different.
*/

/*
// C++ implementation to find the position 
// of rightmost different bit 
#include <bits/stdc++.h> 
using namespace std; 

// Function to find the position of 
// rightmost set bit in 'n' 
int getRightMostSetBit(int n) 
{ 
	return log2(n & -n) + 1; 
} 

// Function to find the position of 
// rightmost different bit in the 
// binary representations of 'm' and 'n' 
int posOfRightMostDiffBit(int m, int n) 
{ 
	// position of rightmost different 
	// bit 
	return getRightMostSetBit(m ^ n); 
} 

// Driver program 
int main() 
{ 
	int m = 52, n = 4; 
	cout << posOfRightMostDiffBit(m, n); 
	return 0;	 
} 

int result = m ^ n;
int count = 1;
while ((result & 1)!=1)
{
result = result>>1;
count++;
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
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 int m,n;
 cin>>m>>n;
 cout<<ffs(m^ n)<<endl;
 }
	//code
	return 0;
}
