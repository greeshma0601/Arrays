/*
Count the subarrays having product less than k Submissions: 18497   Accuracy: 17.9%   Difficulty: Hard   Marks: 8
        
Problems
Given an array of positive numbers, the task is to find the number of possible contiguous subarrays having product less than a given number K.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains two integers N & K and the second line contains N space separated array elements.

Output:
For each test case, print the count of required subarrays in new line.

Constraints:
1<=T<=200
1<=N<=105
1<=K<=1015
1<=A[i]<=105

Example:
Input:
2
4 10
1 2 3 4
7 100
1 9 2 8 6 4 3

Output:
7
16

Explanation:

Input : A[]={1, 2,3,4} 
        K = 10
Output : 7
The contiguous subarrays are {1}, {2}, {3}, {4}
{1, 2}, {1, 2, 3} and {2, 3} whose count is 7.
*/

#include<iostream>
#include<bits/stdc++.h>

#define ll long long
using namespace std;

ll countSubArray(ll int arr[], ll int n, ll int k){
    ll product = 1;
	int s = 0, i = 0;
	int res = 0;
	while(i < n){
	    product *= arr[i];
	    if(product < k)
	        res += i - s + 1;
	    else{
	        while(s < i && product > k)
	            product /= arr[s++];
	            
	        if(product < k)
	            res += i - s + 1;
	    }
	    i++;
	}
	return res;
}

int main()
 {
	//code
	ll int t;
	cin >> t;
	while(t--){
	    ll int n, k;
	    cin >> n >> k;
	    ll int arr[n];
	    for(int i = 0; i < n; i++)
	        cin >> arr[i];
	   cout << countSubArray(arr, n, k) << endl;
	}
	return 0;
}
