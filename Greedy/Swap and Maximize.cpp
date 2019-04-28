/*
Swap and Maximize Submissions: 2257   Accuracy: 49.06%   Difficulty: Basic   Marks: 1
       
Problems
Given an array of n elements. Consider array as circular array i.e element after an is a1. The task is to find maximum sum of the difference between consecutive elements with rearrangement of array element allowed i.e after rearrangement of element find |a1 – a2| + |a2 – a3| + …… + |an – 1– an| + |an – a1|.

Input:
The first line of input contains an integer T denoting the number of test cases. Each test case contains the number of elements in the array a[] as n and next line contains space separated n elements in the array a[].

Output:
Print an integer which denotes the maximized sum.

Constraints:
1<=T<=100
1<=n<=10000
1<=a[i]<=100000​

Example:
Input:
2
4
4 2 1 8
3
10 12 15​
Output:
18​
10
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// Return the maximum Sum of difference between 
// consecutive elements. 
int maxSum(int arr[], int n) 
{ 
    int sum = 0; 
  
    // Sorting the array. 
    sort(arr, arr + n); 
  
    // Subtracting a1, a2, a3,....., a(n/2)-1, an/2 
    // twice and adding a(n/2)+1, a(n/2)+2, a(n/2)+3,. 
    // ...., an - 1, an twice. 
    for (int i = 0; i < n/2; i++) 
    { 
        sum -= (2 * arr[i]); 
        sum += (2 * arr[n - i - 1]); 
    } 
  
    return sum; 
} 
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;cin>>n;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 cout<<maxSum(a,n)<<endl;
 }
	//code
	return 0;
}
