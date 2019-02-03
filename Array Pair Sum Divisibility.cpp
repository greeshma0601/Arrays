/*
Array Pair Sum Divisibility Problem Submissions: 12599   Accuracy: 36.62%   Difficulty: Medium   Marks: 4
         
Given an array of integers and a number k, write a function that returns true if given array can be divided into pairs such that sum of every pair is divisible by k.

Input:
The first line of input contains an integer T denoting the number of test cases. The T test cases follow. Each test case contains an integer n denoting the size of the array. The next line contains the n space separated integers forming the array. The last line contains the value of k.

Output:
Print "True" (without quotes) if given array can be divided into pairs such that sum of every pair is divisible by k or else "False" (without quotes).

Constraints:
1<=T<=100
2<=n<=10^5
1<=a[i]<=10^5
1<=k<=10^5

Example:
Input:
2
4
9 7 5 3
6
4
91 74 66 48
10

Output:
True
False

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool s(int a[],int k,int n)
{
    int i,s=0;
    if(n%2 !=0)return false;
    else
    {
        for(i=0;i<n;i++)
        s+=a[i];
        if(s%k == 0)
        return true;
    }
    return false;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 
 int i,j,k,s1=0,s2=0,n,c=0,f=1;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++)
 cin>>a[i];
 cin>>k;
    bool r=s(a,k,n);
    if(r) cout<<"True"<<endl;
    else cout<<"False"<<endl;
 }
 //int num=n/2;
 /*for(i=0;i<num;i++)
 {
     s1+=a[i];
 }
 for(i=num;i<n;i++)
 {
     s2+=a[i];
 }*/
 /*for(i=0;i<=n-3;i++)
 for(j=i+1;j<=n-2;j++)
 {
     if((a[i]+a[i+1])%k == 0);
     {
         f=0;
         c++;
         cout<<"True"<<endl;
         break;
     }
     if(f == 0)break;
 }
 //if(c>1){cout<<"true"<<endl;}
 if(f == 1){cout<<"false"<<endl;}
 }
*/	//code
	return 0;
}
