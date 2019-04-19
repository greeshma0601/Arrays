/*
The amazing number [Editorial]
A number has exactly 3 distinct divisors only if the square root of that number is a prime number. The three distinct factors are: 1, square root of n, and n itself.
The amazing number
You are given a number N. Your task is to determine if N is an amazing number or not.  A number is called amazing if it has exactly three distinct divisors.

Input:
The first line of the input contains a single integer T, denoting the number of test cases. Then T test case follows. Each testcase contains a single line having N as input.

Output:
For each testcase, print 1 if the number is amazing, else print 0.

Constraints:
1<=T<=1112
2<=N<=1018

Example:

Input:
3
2
3
4

Output:
0
0
1

Explanation:

For testcase 1: 2 has the following divisors: 1, 2. Only 2 divisors, so we print 0.
For testcase 2: 3 has the following divisors: 1, 3. Only 2 divisors, so we print 0.
For testcase 3: 4 has the following divisors: 1, 2,4. Exactly 3 divisors, so we print 1.



*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool an( int n)
{
 
  // Iterate from 2 to n/2 
//int n=(int)n2+1;
   //long long int c=1;
   if(n<=1)return 0;
    for(int i=2;i<=sqrt(n);i++)
if(n%i == 0)return 0;
  //  if(c == 3)return 1;else return 0;

    return 1;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
long long n;
 cin>>n;
 long n1=(long)sqrt(n);
 if(n1*n1 == n)
{ if(an(n1))cout<<1;else cout<<0;cout<<endl;}
else cout<<0<<endl;
 }
	//code
	return 0;
}
