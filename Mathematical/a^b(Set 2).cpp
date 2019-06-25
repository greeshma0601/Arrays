/*
a^b(Set 2)
For two given positive numbers a and b. Find a^b. Output your number modulus 10^9+7.

Input:
The first line contains an integer 'T' denoting the total number of test cases. In each test cases, there are two numbers a and b.


Output:
Find a^b.


Constraints:
1 <= T <= 31
1 <= a <= 100
1 <= b <= 1000000


Example:
Input:
2
1 1
2 5

Output:
1
32
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
long long mod=1000000007;
long long int power(long long int x,long long int y)
{
    int res=1;
    while(y>0)
    {
        if(y&1)
        res=(res*x)%mod;
        y=y/2;
        x=(x*x)%mod;
    }
    return res;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 long long int x;
 long long int y;
 cin>>x>>y;
 cout<<power(x,y)<<endl;
 }
	//code
	return 0;
}
