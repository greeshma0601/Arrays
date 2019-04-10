/*
Find first set bit
Given an integer an N. The task is to print the position of first set bit found from right side in the binary representation of the number.

Input:
The first line of the input contains an integer T, denoting the number of test cases. Then T test cases follow. The only line of the each test case contains an integer N.

Output:
For each test case print in a single line an integer denoting the position of the first set bit found form right side of the binary representation of the number. If there is no set bit print "0".

Constraints:
1 <= T <= 200
0 <= N <= 106

Example:
Input:
2
18
12

Output:
2
3

Explanation:
Testcase 1: Binary representation of the 18 is 010010, the first set bit from the right side is at position 2.

*/

//https://www.geeksforgeeks.org/position-of-rightmost-set-bit/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
long long int n,i=1;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 /*
long long int m=1;*/
// cout<<ffs(n)<<endl;
/*while(!(n&m))
{
    m=m<<1;
    i++;
}
cout<<i<<endl;*/
   //  cout<<log2(n & -n)+1<<endl;
 }
	//code
	return 0;
}
