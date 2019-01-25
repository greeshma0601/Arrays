/*
Find the fine
Given an array of penalties P, an array of car numbers C, and also the date D. The task is to find the total fine which will be collected on the given date. Fine is collected from odd-numbered cars on even dates and vice versa.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of three lines of input. First line of each test case contains two integers N & D, second line contains N space separated car numbers C and third line contains N space separated penalties P.

Output:
For each test case,In new line print the total fine.

Constraints:
1 <= T <= 100
1 <= N <= 105
1000 <= Ci <= 9999
1 <= D <= 31
1 <= Pi <= 103
Example:
Input:
2
4 12
2375 7682 2325 2352
250 500 350 200
3 8
2222 2223 2224
200 300 400
Output:
600
300

Explantion:
Testcase1: The date is 12 (even), so we collect the fine from odd numbered cars. The odd numbered cars and the fines associated with them are as follows:
2375 -> 250
2325 -> 350
The sum of the fines is 250+350 = 600

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
 int i,n,d;
 cin>>n>>d;
 int c[n],p[n];
 for(i=0;i<n;i++)
 cin>>c[i];
 for(i=0;i<n;i++)
 cin>>p[i];
 int s1=0,s2=0;
 if((d%2)==0)
 {
     for(i=0;i<n;i++)
     {
         if((c[i]%2)!=0)s1+=p[i];
     }
 }
 else
 {
     for(i=0;i<n;i++)
     {
         if((c[i]%2)==0)s1+=p[i];
     }
 }
 
     cout<<s1<<endl;
 }
 
	//code
	return 0;
}
