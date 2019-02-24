/*
Find Prime numbers in a range Submissions: 8771   Accuracy: 49.74%   Difficulty: Medium   Marks: 4
          
Generate all prime numbers between two given numbers.

Input:

The first line of the input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of a single line containing two space separated integers m and n.
Output:

For every test case print all prime numbers p such that m <= p <= n, space separated. Separate the answers for each test case by a new line.

Constraints:
1<=T<=60
1 <= m <= n <= 100000,
n - m <= 100000

Example:

Input:

2

1 10

3 5

Output:

2 3 5 7

3 5
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool isPrime(int n)
{
    if(n<=1)return false;
    for(int i=2;i<n;i++)
    if(n%i == 0)
    return false;
    
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
 int i,n1,n2;
 cin>>n1>>n2;
 for(i=n1;i<=n2;i++)
 {
     if(isPrime(i))
     cout<<i<<" ";
 }
 cout<<endl;
 }
	//code
	return 0;
}
