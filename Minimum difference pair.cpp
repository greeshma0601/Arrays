/*Minimum difference pair
Given an unsorted array, find the minimum difference between any pair in given array.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N, the size of array. Second line of the test case is the Array.

Output:

Print the minimum difference between any two pairs.

Constraints:

1 <= T <= 30
1 < N <= 100
1 <= arr[i] <= 100000

Example:
Input:
2
5
2 4 5 7 9
10
87 32 99 75 56 43 21 10 68 49

Output:
1
6
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
     int i,j,n;
     cin>>n;
     int a[n];
     for(i=0;i<n;i++)
     cin>>a[i];
     int min=abs(a[0]-a[1]);int x;
     for(i=0;i<=n-2;i++)
     for(j=i+1;j<n;j++)
     {
         x=abs(a[i]-a[j]);
         if(x<min)
         min=x;
     }
 cout<<min<<endl;
 }
	//code
	return 0;
}
