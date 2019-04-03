/*
Pair with given sum in a sorted array
You are given an array A of size N. You need to find all pairs in the array that sum to a number K. If no such pair exists then output will be -1. The elements of the array are distinct and are in sorted order.
Note: (a,b) and (b,a) are considered same. Also, an element cannot pair with itself, i.e., (a,a) is invalid.

Input:
The first line of input is T denoting the number of testcase. T testcases follow. Each testcase contains three lines of input. The first line is the size of array N. The second line contains N elements separated by spaces. The third line contains the sum K.

Output:
For each testcase, print all the pairs such that there sum is equal to K.

Constraints:
1 <= T <= 100
0 <= Ai <=107
2 <= N <= 107
0 <= K <= 107

Examples:
Input:
2
7
1 2 3 4 5 6 7
98
7
1 2 3 4 5 6 7
8
Output:
-1
1 7 8
2 6 8
3 5 8

Explanation:
Testcase1: We cannot find any pair that sums to 98
Testcase2: We find 3 such pairs that sum to 8 (1,7) (2,6) (3,5)
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
 int n,i,k;cin>>n;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 cin>>k;
 int l=0,h=n-1;
 int c=0;
 while(l<h)
 {
     if(a[l]+a[h] == k)
     {
         cout<<a[l]<<" "<<a[h]<<" "<<k<<endl;
         l++;h--;
         c++;
     }
     else if(a[l]+a[h]<k)l++;
     else h--;
     
 }
 if(c == 0)cout<<"-1"<<endl;
 
 }
	//code
	return 0;
}
