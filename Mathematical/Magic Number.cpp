/*
Magic Number
A magic number is defined as a number which can be expressed as a power of 5 or sum of unique powers of 5. First few magic numbers are 5, 25, 30(5 + 25), 125, 130(125 + 5), ….

Given the value of n. find the nth Magic number.

Input:

The first line contains an integer T, depicting total number of test cases. 
Then following T lines contains an integer N depicting the value of N.

P.S : As the number can be very large print the number modulo 10^9+7.


Output:

Print the nth magic number in a separate line.

Constraints:

1 ≤ T ≤ 30
1 ≤ N ≤ 10^5

Example:

Input:
2
1
2
Output:
5 
25
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define m 1000000007
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 long long int n;
 cin>>n;long long int p=1,ans=0;
 while(n)
 {
     p=p*5;
     if(n&1)
     ans=ans+p;
     n=n>>1;
 }
 cout<<ans%m<<endl;
 }
	//code
	return 0;
}
