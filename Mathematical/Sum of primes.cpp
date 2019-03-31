/*
Sum of primes
Your task is to calculate sum  of primes present as digits of given number N.

Input:

The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. The next T lines contains an integer N.

Output:
Print sum of primes in the digit

Constraints:
1 ≤ T ≤ 50
2 ≤ N ≤ 50000


Example:

Input:

2
333
686

Output:
9
0

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool isPrime(int n)
{
    if(n<=1)return false;
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
        return false;
    }
    return true;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 string s;
 cin>>s;
 int sum=0;
 int n=s.length();
 for(int i=0;i<n;i++)
 {
     int a=s[i]-'0';
     if(isPrime(a))
     {
         sum+=a;
     }
     
 }
 cout<<sum<<endl;
 }
	//code
	return 0;
}
