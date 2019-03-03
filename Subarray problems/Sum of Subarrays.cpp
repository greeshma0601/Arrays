/*
Sum of Subarrays Submissions: 3559   Accuracy: 17.94%   Difficulty: Medium   Marks: 4
       
Given an array A with N elements , you need to find the sum all sub arrays of array A. Since the sum could be very large print the sum modulo (10^9+7).
Input :
The first line contains integer T, denoting number of test cases. The first line of each test case contains an integer N, denoting the number of elements.The second line of each test case contains N space separated integers denoting values of the array A.
Output :
Print the answer of each test case in a new line.
Constraints :
1<=T<=100
1<=N<=10^5
Example
Input :
2
3
1 2 3
2
1 3
Output :
20
8
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define mod 1000000007
long long int  sa(long long int a[],long long  int n)
{
    long long int res=0;
    for(int i=0;i<n;i++)
    {
        res+=((a[i]*(i+1)*(n-i))%mod)%mod;
    }
       /* for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            res+=a[k];
            
        }
    }*/
    return res%mod;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 long long int n,i;cin>>n;
 long long int a[n];for(i=0;i<n;i++)cin>>a[i];
long long int r=sa(a,n);
 cout<<r<<endl;
 }
	//code
	return 0;
}
