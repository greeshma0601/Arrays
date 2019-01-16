/*
Given a number N, check if a number is perfect or not. A number is said to be perfect if sum of all its factors excluding the number itself is equal to the number.

Input:
First line consists of T test cases. Then T test cases follow .Each test case consists of a number N.

Output:
For each testcase, in a new line, output in a single line 1 if a number is a perfect number else print 0.

Constraints:
1 <= T <= 300
1 <= N <= 1018

Example:
Input:
2
6
21
Output:
1
0




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
long long int n,i,k=0;
long long int sum=0;
int a[100];
cin>>n;
if(n==1)
{
    cout<<"1";
    break;
}
else if(n==0)
{
    cout<<"0";
    break;
}
else{
for(i=2;i<sqrt(n);i++)
{
    if(n%i==0)
    sum=sum+(n/i);
}

/*for(i=0;i<k;i++)
{
    sum+=a[i];
}*/
if(sum==n)
{cout<<"1";
    break;
}
else{
    cout<<"0";
}}
cout<<endl;
 }
	//code
	return 0;
}
