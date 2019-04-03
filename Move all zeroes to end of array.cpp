/*
Move all zeroes to end of array Submissions: 16373   Accuracy: 44.94%   Difficulty: Easy   Marks: 2
           
Problems
Given an array A of positive integers. Push all the zero’s of a given array to the end of the array.

Input:
The first line contains an integer T denoting the total number of test cases. In each test cases, first line is number of elements in array N and next line contains array elements.

Output:
Print the array after shifting all 0's at the end.â€‹

Constraints:
1 <= T <= 100
1 <= N <= 103
0 <= Ai <=103

Example:
Input:
1
5
3 5 0 0 4

Output:
3 5 4 0 0

Explanation:
Testcase 1: All the zeros are moved to last and then array is as shown in the output.

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
 int n,i,c=0;cin>>n;
 int a[n];
 for(i=0;i<n;i++)
 {
 cin>>a[i];
 if(a[i] == 0)c++;
 else cout<<a[i]<<" ";
     
 }
for(i=0;i<c;i++)
cout<<"0"<<" ";
cout<<endl;
 
 }
	//code
	return 0;
}
