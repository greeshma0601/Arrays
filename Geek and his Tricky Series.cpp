/*
Geek and his Tricky Series Submissions: 5479   Accuracy: 26.66%   Difficulty: Easy   Marks: 2
   
Problems
Given a series with starting 6 members of the series. Given an integer n find the nth term of this series.

Series: 7, 15, 32, 67, 138, 281, ............

Examples :

Input : 7
Output : 568
Input:
First line of the input contains an integer T, denoting the number of test cases. Then T test case follows. The only line of the test case contains an integer N.

Output:
For each test case print the nth term of the series in a new line.Print the answer modulo 10^9 +7.

Constraints:
1<=T<=100
1<=N<=120

Example:
Input:
2
9
16
Output:
2294
294895

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
 long long int n,i,mod=1000000007;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 long long int r=7;long long int k=1;
 for(i=2;i<=n;i++)
 {
     r=((r*2)%mod+k%mod)%mod;
     k=k+1;
 }
 cout<<r%mod<<endl;
 }
	//code
	return 0;
}
