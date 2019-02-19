/*
Odd Divisors
Given a natural number n, print count of numbers from 1 to n that have odd number of divisors.  For example,  4 has odd number of divisors (1, 2, 4), but 8 doesn't (1, 2, 4, 8)

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is n.

Output:
Count of numbers from 1 to n with odd divisors.

Constraints:
1 <= T <= 30
1 <= N <= 100000

Example:
Input:
3
1
4
5

Output:
1
2
2
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool cOfoddDivisors(int n)
{
    int rn=sqrt(n);
    if((rn*rn) == n)return true;
    else return false;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
     int n,c=0;
     cin>>n;
     int i;
     for(i=1;i<=n;i++)
     {
         if(cOfoddDivisors(i)){
             c++;
         }
     }
 cout<<c<<endl;
 }
	//code
	return 0;
}
