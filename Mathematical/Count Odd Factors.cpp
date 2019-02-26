/*
Count Odd Factors
Given an integer N, print count of numbers having odd number of factors from 1 to N (inclusive).

Input:
The first line contains T denoting the number of test cases. Then the following T lines contains the single integer N denoting the value of N.

Output:
For each testcase, in a new lne, print the total count of numbers having odd number of factors.

Constraints:
1 <= T <= 100
1 <= N <= 109

Example:
Input :
2
1
5
Output :
1
2
*/


//Formula range from m to n
//count = (int)pow(m,0.5)-(int)pow(n-1,0.5)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 long long int n;
 cin>>n;
 long long int c=0;
 /*for(long long int i=1;i<=n;i++)
 {
     long long int root_n = sqrt(i);
     if(root_n * root_n == i)
     {
         c++;
     }
 }
 cout<<c<<endl;*/
 
     cout<<(int)pow(n,0.5)<<endl;
 }
	//code
	return 0;
}
