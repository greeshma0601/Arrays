/*
G.F Series Submissions: 5207   Accuracy: 25.63%   Difficulty: Basic   Marks: 1
     
Problems
Siddhant made a special series and named it as G.F Series.The series follows this trend  Tn=(Tn-2)2-(Tn-1)  in which the first and the second term are 0 and 1 respectively.Help Siddhant to find  upto N terms of the series .

Input:
First line contain T, number of test cases.Second line contains an integer N upto which series will run.

Output:
Print all the terms which will occur in the series(upto N).

Constraints:
1 <= T <= 100
1 <= N <= 15
Example:
Input:
3
3
6
2

Output:
0 1 -1 
0 1 -1 2 -1 5  
0 1
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
ll gfs(ll n)
{
    if(n == 1)return 0;
    if(n == 2)return 1;
    else return(pow(gfs(n-2),2)-gfs(n-1));
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 ll n;cin>>n;
 for(ll i=1;i<=n;i++)
 {
     ll a=gfs(i);cout<<a<<" ";
 }
 cout<<endl;
 }
	//code
	return 0;
}
