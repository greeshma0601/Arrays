/*
Number is sparse or not Submissions: 4442   Accuracy: 59.39%   Difficulty: Basic   Marks: 1
Associated Course(s):   Geeks Classes DSA   Geeks Classes in Noida   Geeks Classes DSA- Tutorials Less
   
Problems
Given a number N, check whether it is sparse or not. A number is said to be a sparse number if in the binary representation of the number no two or more consecutive bits are set.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is number 'N'.

Output:
Print '1' if the number is sparse and '0' if the number is not sparse.

Constraints:
1 <= T <= 100
1 <= N <= 103

Example:
Input:
2
2
3

Output:
1
0

Explanation:
Testcase 1: Binary Representation of 2 is 10, which is not having consecutive set bits. So, it is sparse number.
Testcase 2: Binary Representation of 3 is 11, which is having consecutive set bits in it. So, it is not a sparse number.
 
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// Return true if n is sparse, else false 
bool checkSparse(int n) 
{ 
    // n is not sparse if there is set 
    // in AND of n and n/2 
    if (n & (n>>1)) 
        return false; 
  
    return true; 
} 
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 
     if(checkSparse(n))
     cout<<"1";
     else
     cout<<"0";
     cout<<endl;
 }
	//code
	return 0;
}
