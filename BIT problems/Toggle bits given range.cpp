/*
Toggle bits given range
Given a non-negative number N and two values L and R. The problem is to toggle the bits in the range L to R in the binary representation of N, i.e, to toggle bits from the rightmost Lth bit to the rightmost Rth bit. A toggle operation flips a bit 0 to 1 and a bit 1 to 0.

Input:
First line of input contains a single integer T which denotes the number of test cases. Then T test cases follows. First line of each test case contains three space separated integers N, L and R.

Output:
For each test case , print the number obtained by toggling bits from the rightmost Lth bit to the rightmost Rth bit in binary representation of N.

Constraints:
1<=T<=100
1<=N<=1000
1<=L<=R
L<=R<= Number of bits(N)

Example:
Input:
2
17 2 3
50 2 5
Output:
23
44

 

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
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 int n;
 cin>>n;
 bitset<10>bs(n);
 int l,r;
 cin>>l>>r;
 //cout<<bs<<endl;
 for(int i=l-1;i<r;i++)
 bs.flip(i);
 //cout<<bs<<endl;
 cout<<bs.to_ulong()<<endl;
 }
	//code
	return 0;
}
