/*
Smallest greater elements in whole array

Given an array A of N length. We need to calculate the next greater element for each element in given array. If next greater element is not available in given array then we need to fill ‘_’ at that index place.

Input:
The first line contains an integer T, the number of test cases. For each test case, the first line contains an integer n, the size of the array. Next line contains n space separated integers denoting the elements of the array. 

Output:
For each test case, the output is an array that displays next greater element to element at that index.

Constraints:
1 <= T <= 100
1 <= N <= 100
-106 <= Ai <= 106

Example:
Input
2
9
6 3 9 8 10 2 1 15 7
4
13 6 7 12

Output:
7 6 10 9 15 3 2 _ 8
_ 7 12 13

Explanation:
Testcase 1: Here every element of the array has next greater element but at index 7, 15 is the greatest element of given array and no other element is greater from 15 so at the index of 15 we fill with '_'.
Testcase 2: Here, at index 0, 13 is the greatest value in given array and no other array element is greater from 13 so at index 0 we fill '_'.


*/

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 int n,i;
 cin>>n;
 vector<int>v(n);
 set<int>s;
 for(i=0;i<n;i++)
 {
     cin>>v[i];
     //s[i]=v[i];
 
     s.insert(v[i]);
 }

 for(i=0;i<n;i++)                                                                
 {
 auto it=s.find(v[i]);
 it++;
 if(it == s.end())cout<<"_"<<" ";
 else cout<<*it<<" ";
    
 }
 cout<<endl;
 
 }
	//code
	return 0;
}
