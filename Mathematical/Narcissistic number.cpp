/*
Narcissistic number
Given N, check whether it is a Narcissistic number or not.

Note:Narcissistic Number is a number that is the sum of its own digits each raised to the power of the number of digits

Input:

The first line of the input contains a single integer T, denoting the number of test cases. Then T test case follows, a single line of the input containing a positive integer N.
Output:

Print 'Yes' if it is narcissistic,otherwise print 'No'.


Constraints:

1<=T<=100

1<=N<=100000
Example:

Input:

2

407

111

Output:

Yes

No

Explanation:

Testcase 1:- 4^3+0^3+7^3 = 64+0+343 = 407 equals to N.

Testcase 2:- 1^3+1^3+1^3 = 3 is not equal to N.
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
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 string s;
 cin>>s;int len=s.length();
 int n=stoi(s);
 int sum=0;
 for(int i=0;i<len;i++)
 {
     int a=s[i]-'0';
     sum+=pow(a,len);
 }
 if(sum == n)
 {
     cout<<"Yes";
 }
 else
 {
     cout<<"No";
 }
 cout<<endl;
 }
	//code
	return 0;
}
