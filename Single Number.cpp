/*
Single Number
Given an array of positive integers where every element appears even times except for one. Find that number occuring odd number of times.

Input:
First line will consist  a number T, the number of test cases. Each test case will then consist of an integer N denoting the size of array. Next line will consist of N space separated integers, the array elements.

Output:
Print the element that appears odd times in the array.

Constraints:
1 <= T <= 30
1 <= N <= 107
0 <= Ai <= 108

Example:
Input:
2
5
1 1 2 2 2
7
8 8 7 7 6 6 1

Output:
2
1

Explanation:
Testcase 1: In the given array 1 is present even number of times and 2 is present odd number of times.
*/
#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],i;
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    int ans=a[0];
	    for(i=1;i<n;i++)
	    ans=ans^a[i];
	    cout<<ans<<endl;
	}
	return 0;
}
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int singlenumber(int a[],int n)
{
    int i;
    sort(a,a+n);

 for(i=0;i<n-1;)
 {
    if(a[i]!=a[i+1])
    {
      return a[i];
    }
    i=i+2;
 }
 if(i<n)
 return a[n-1];
 else return 0;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;cin>>n;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 cout<<singlenumber(a,n)<<endl;
 }
	//code
	return 0;
}
