/*
Cross character
Convert a given string to its cross string (i.e Diagonal from left-right and from right-left). 

Input:

The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of two lines. The first line of each test case consists of a String in lower case.

Output:

Print given string(in lower case) in cross manner.

Constraints:

1 ≤ T ≤ 100
1 ≤ length of string ≤ 50

Example:

Input
2
geeks
geeksforgeeks

Output
g   s e k   e   e k g   s

g           s e         k   e       e     k     e       s   g         f r           o           f r         s   g       k     e     e       e   e         k g           s

Explanation:

For the 1st test case where string is geeks

G   S
 E K
  E
 E K
G   S
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void printpat(string s,int len)
{
    for(int i=0;i<len;i++)
    {
        int j=len-i-1;
        for(int k=0;k<len;k++)
        {
            if(k == i || k == j)
            cout<<s[k];
            else
            cout<<" ";
        }
    }
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 string s;
 cin>>s;
 printpat(s,s.length());
 cout<<endl;
 }
	//code
	return 0;
}
