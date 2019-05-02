/*
https://www.geeksforgeeks.org/find-the-longest-substring-with-k-unique-characters-in-a-given-string/

Longest K unique characters substring
Given a string you need to print the size of the longest possible substring that has exactly k unique characters. If there is no possible substring print -1.
Example
For the string aabacbebebe and k = 3 the substring will be cbebebe with length 7.


Input:
The first line of input contains an integer T denoting the no of test cases then T test cases follow. Each test case contains two lines . The first line of each test case contains a string s and the next line conatains an integer k.

Output:
For each test case in a new line print the required output.

Constraints:
1<=T<=100
1<=k<=10

Example:
Input:
2
aabacbebebe
3
aaaa
1
Output:
7
4
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool isValid(int c[],int k)
{
    int v=0;
    for(int i=0;i<26;i++)
    {
        if(c[i]>0)
        v++;
    }
    return (v<=k);
}
int lkucs(string s,int k)
{
    int i,u=0;
    int n=s.length();
    int c[26]={0};
    for(i=0;i<n;i++)
    {
        if(c[s[i]-'a'] == 0)
        u++;
        c[s[i]-'a']++;
    }
    if(u<k)
    {
        return -1;
    }
    int cur_start=0,cur_end=0,max_size=1,max_window_start=0;
    for(i=0;i<26;i++)
    c[i]=0;
    
    c[s[0]-'a']++;
    for(i=1;i<n;i++)
    {
     c[s[i]-'a']++;
     cur_end++;
    
    while(!isValid(c,k))
    {
        c[s[cur_start]-'a']--;
        cur_start++;
    }
    
    int h=cur_end-cur_start+1;
    if(h>max_size)
    {
        max_size=h;
        max_window_start=cur_start;
    }
    }
    return max_size;
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
 int k;
 cin>>k;
 cout<<lkucs(s,k)<<endl;
 }
	//code
	return 0;
}
