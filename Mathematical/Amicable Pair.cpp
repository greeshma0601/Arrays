/*
Amicable Pair
Amicable numbers are two different numbers so related that the sum of the proper divisors of each is equal to the other number. (A proper divisor of a number is a positive factor of that number other than the number itself.

INPUT: The first line consists of an integer T i.e. the number of test cases. First and the last line of each test case consists of two integers x and y.

OUTPUT: Print '1' if the following pair is amicable pair otherwise print '0'.

CONSTRAINTS:

1<=T<=100
1<=x,y<=105

EXAMPLES:
INPUT :
2
220 284
1 2

OUTPUT : 
1
0

Explanation :

Test Case 1 : Proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110. Sum of these is 284. Proper divisors of 284 are 1, 2, 4, 71 and 142 with sum 220.
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
long long int pds(long long int n)
{
    long long int res=0;
   for(long long int i=2;i<=sqrt(n);i++)
   {
       if(n%i == 0)
       {
           if(n/i == i)
           res+=i;
           else
           res+=n/i+i;
       }
   }
   return res+1;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 int m,n;
 cin>>m>>n;
 long long int sm=pds(m);
 long long int sn=pds(n);
 if(sm == n && sn == m)
 {
     cout<<"1";
 }
 else cout<<"0";
 cout<<endl;
 }
	//code
	return 0;
}
