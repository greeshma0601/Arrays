/*
Given an array arr[] of N non-negative integers representing height of blocks at index i as Ai where the width of each block is 1. Compute how much water can be trapped in between blocks after raining.
Structure is like below:
|  |
|_|
We can trap 2 units of water in the middle gap.



Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. Each test case contains an integer N denoting the size of the array, followed by N space separated numbers to be stored in array.

Output:
Output the total unit of water trapped in between the blocks.

Constraints:
1 <= T <= 100
3 <= N <= 107
0 <= Ai <= 108

Example:
Input:
2
4
7 4 0 9
3
6 9 9

Output:
10
0

Explanation:
Testcase 1: Water trapped by block of height 4 is 3 units, block of height 0 is 7 units. So, total unit of water trapped is 10 units.
 
*/


//For every bar, at first i stored the max left height and max right height, you can easily understand the code for that. Then for every bar the max water height will be min(left max height , right max height) , the require more water will be min value obtained minus hight of that bar. 
#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t; cin>>t;
while(t--){
	ll n; cin>>n;
	vector<ll>a(n); ll i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	ll left[n],right[n];
	left[0]=a[0];
	for(i=1;i<n;i++){
		left[i]=max(left[i-1],a[i]);
	}
	right[n-1]=a[n-1];
	for(i=n-2;i>=0;i--){
		right[i]=max(right[i+1],a[i]);
	}
 /*for(int i=0;i<n;i++)
 {
     cout<<left[i]<<" ";
 }
 cout<<endl;
 for(int i=0;i<n;i++)
 {
     cout<<right[i]<<" ";
 }
 cout<<endl;*/
	ll w=0;
	for(i=1;i<n-1;i++){
		w+=min(right[i],left[i])-a[i];
	}
	cout<<w<<endl;
}
	return 0;
}
