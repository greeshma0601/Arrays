/*
Type of array
You are given an array of size N having no duplicate elements. The array can be categorized into following:
1.  Ascending
2.  Descending
3.  Descending Rotated
4.  Ascending Rotated
Your task is to print which type of array it is and the maximum element of that array.

Input:
The first line of input contains an integer T denoting the no test cases. Then T test caes follow. Each testcase contains two lines of input. The first line contains an integer N denoting the size of the array. The next line contains N space separated values of the array.

Output:
For each test case, print the largest element in the array and and integer x denoting the type of the array.

Constraints:
1 <= T <= 100
3 <= N <= 107
1 <= A[] <= 1018

Example:
Input:
2
5
2 1 5 4 3
5
3 4 5 1 2

Output:
5 3
5 4

Explanation:
Testcase1:
Input : A[] = { 2, 1, 5, 4, 3}
Output : Descending rotated with maximum element 5 
Testcase2:
Input : A[] = { 3, 4, 5, 1, 2}
Output : Ascending rotated with maximum element 5

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int  printabs(int n)
{
    if(n<10)return 0;
    string s=to_string(n);
   
    int l=s.length();
    for(int i=0;i<l-2;i++)
    {
        if(abs(s[i]-s[i+1]) == 1 || abs(s[i]-s[i-1])==1)
        {
            
        }
        return 0;
    }
    return 1;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i,k;cin>>n>>k;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 for(i=0;i<n;i++)
 {
     if(a[i]<k)
     {
     
     int r=printabs(a[i]);
     if(r == 1)cout<<a[i]<<" ";
   
     }
   
     }
 cout<<endl;     
 }

	//code
	return 0;
}
