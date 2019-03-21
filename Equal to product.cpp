/*
Equal to product Submissions: 25544   Accuracy: 28.38%   Difficulty: Easy   Marks: 2
        
Problems
Discussions
Given an array of positive integers. Check whether there are two numbers present with given product.

Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N and a product P.
The second line of each test case contain elements of array.

Output:
Print "Yes" (Without quotes) if two numbers product is equal to P else "No" (without quotes).

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 107
0 ≤ Ai ≤ 263 - 1
0 <= P <= 264 - 1

Example:
Input:
2
5 25
1 2 3 4 5
8 63
5 7 9 22 15 344 92 8

Output:
No
Yes
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
ulong n,p;cin>>n>>p;int f=0;
ulong a[n];for(int i=0;i<n;i++)cin>>a[i];
sort(a,a+n);
int l=0,h=n-1;
while(l<h)
{
    if(a[l]*a[h] == p)
    {
        cout<<"Yes"<<endl;
        f=1;
        break;
    }
    else if(a[l]*a[h] < p)l++;
    else h--;
}
 if(f == 0)cout<<"No"<<endl;
/* for(i=0;i<=n-2;i++)
 for(j=i+1;j<=n-1;j++)
     {
         if(a[i]*a[j] == p)
         {
             f=1;
             cout<<"Yes"<<endl;
             break;
         }
     }
 
     if(!f)cout<<"No"<<endl;
 */
 }
 
 
	//code
	return 0;
}
