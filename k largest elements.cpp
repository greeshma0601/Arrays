/*k largest elements Submissions: 25289   Accuracy: 46.48%   Difficulty: Basic   Marks: 1
Associated Course(s):   Interview Preparation   Geeks Classes in Noida More
              
Given an array of N positive integers, print k largest elements from the array.  The output elements should be printed in decreasing order.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N and k, N is the size of array and K is the largest elements to be returned. The second line of each test case contains N input C[i].

Output:
Print the k largest element in descending order.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 100
K ≤ N
1 ≤ C[i] ≤ 1000

Example:
Input:
2
5 2
12 5 787 1 23
7 3
1 23 12 9 30 2 50

Output:
787 23
50 30 23

Explanation:
Testcase 1: 1st largest element in the array is 787 and second largest is 23.
Testcase 2: 3 Largest element in the array are 50, 30 and 23.*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int i,n,k;
 cin>>n>>k;
 int a[n];
 for(i=0;i<n;i++)
 cin>>a[i];
 sort(a,a+n);
 int m=0;
 for(i=n-1;i>=0;i--)
 {
      cout<<a[i]<<" ";
  m++;
  if(m==k){break;}
 
 }
 cout<<endl;
 }
	//code
	return 0;
}
