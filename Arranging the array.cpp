/*Arranging the array
You are given an array of size N. Rearrange the given array in-place such that all the negative numbers occur before positive numbers.(Maintain the order of all -ve and +ve numbers as given in the original array).

Input:
The first line consists of an integer T denoting the number of test cases. T testcases follow. Each test case contains two lines of input. The first line contains the size of the array denoted by N. Then in the next line are N space separated elements of the array.

Output:
For each test case, print the array after rearranging with spaces between the elements of the array.

Constraints:
1 <= T <= 100
1 <= N <= 107
-1018 <= Elements of array <= 1018

Example:
Input:
2
4
-3 3 -2 2
5
2 -4 7 -3 4
Output:
-3 -2 3 2
-4 -3 2 7 4

Explanation:
Testcase 1: In the given array, negative numbers are -3, -2 and positive numbers are 3, 2.*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int i,n;
 cin>>n;
 int a[n];
 vector<int> v;
 for(i=0;i<n;i++)
 {
    cin>>a[i]; 
    if(a[i] < 0)
    {
        v.push_back(a[i]);
    }
 }
 for(i=0;i<n;i++)
 {
     if(a[i]>=0)
     v.push_back(a[i]);
 }
 for(i=0;i<n;i++)
 {
     cout<<v[i]<<" ";
 }
 cout<<endl;
 }
	//code
	return 0;
}
