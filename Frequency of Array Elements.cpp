/*Frequency of Array Elements
Given an array of positive integers which can contain integers from 1 to N where elements can be repeated or can be absent from the array. Your task is to count frequency of all elements from 1 to N.

Note: Expected time complexity is O(n) with O(1) extra space.

Input: 
First line of input contains an integer T denoting the number of test cases. For each test case, first line contains an integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
For each test case, output N space-separated integers denoting the frequency of each element from 1 to N.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 106 
1 <= A[i] <= 106

Example: 
Input:
2
5
2 3 2 3 5
4
3 3 3 3

Output:
0 2 2 0 1
0 0 4 0*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;
 cin>>n;
 int a[n+1];
 int m[n+1]={0};
 for(i=1;i<=n;i++)
 {
     cin>>a[i];
    m[a[i]]++;
     
 }
 for(i=1;i<=n;i++)
 {
     cout<<m[i]<<" ";
 }
 cout<<endl;
 }
 
 /*map<int,int> m;
 for(i=1;i<=n;i++)
 {
     cin>>a[i];
    m[a[i]]++;
     
 }
 for(i=1;i<=n;i++)
 {
     cout<<m[i]<<" ";
 }
 cout<<endl;
 }*/
	//code
	return 0;
}
