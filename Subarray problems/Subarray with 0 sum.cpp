/*
Subarray with 0 sum
Given an array a[] of N positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n denoting the size of the array. The next line contains N space separated integers forming the array.

Output:
Print "Yes" ( without quotes) if there exist a subarray of size at least one with sum equal to 0 or else print "No" ( without quotes).

Constraints:
1 <= T <= 100
1 <= N <= 104
-105 <= a[i] <= 105

Example:
Input:
2
5
4 2 -3 1 6
5
4 2 0 1 6

Output:
Yes
Yes

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
int n,j,i,f=0;cin>>n;
int a[n];for(i=0;i<n;i++)cin>>a[i];
int s=0;
for(i=0;i<n;i++)
{
    s=0;
    for(j=i;j<n;j++)
    {
        s+=a[j];
        
            if(s == 0){
                f=1;break;
            }
        
        if(f == 1)break;
    }if(f == 1)break;
}
if(!f)cout<<"No";else cout<<"Yes";cout<<endl;
 }
	//code
	return 0;
}
