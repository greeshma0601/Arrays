/*
Special Numbers
A number is a special number if it’s digits only consist 0, 1, 2, 3, 4 or 5.

Given a number n and we have to find n-th Special Number. 

Input:
First line of input contains the number of test cases.

The only line of the test case contains N.

Output:

Print the nth special number.

Constraints:

1<=T<=100

1<=N<=100000


Example:

Sample Input:

2
6
10

Sample Output:

5
13

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define MAX 100000
int baseconv(int a[],int num,int base)
{
    int rem,i=0;
    if(num == 0)return 0;
    while(num>0)
    {
        rem=num%base;
        a[i++]=rem;
        num/=base;
    }
    return i;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n;
 cin>>n;
 int a[MAX];
 int size = baseconv(a,n-1,6);
 if(size == 0)cout<<"0"<<endl;
 else
 {
     for(int i=size-1;i>=0;i--)
    { cout<<a[i];}
    cout<<endl;
 }

 }
	//code
	return 0;
}
