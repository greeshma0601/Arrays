/*
Last index of One Submissions: 7476   Accuracy: 33.43%   Difficulty: Basic   Marks: 1
Associated Course(s):   Interview Preparation
         
Given a string S consisting only '0's and '1's,  print the last index of the '1' present in it.

Input:
First line of the input contains the number of test cases T, T lines follow each containing a stream of characters.

Output: 
Corresponding to every test case, output the last index of 1. If 1 is not present, print "-1" (without quotes).

Constraints: 
1 <= T <= 110
1 <= S <= 1018

Example:
Input:
2
00001
0
Output:
4
-1

Explanation:
Testcase 1: Last index of  1 in given string is 4.
Testcase 2: Since, 1 is not present, so output is -1.

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
     int i;
 string s;
 cin>>s;
 int f=1;
 int l1=(s.length()-1);
 //cout<<s[l1]<<endl;
 for(i=l1;i>=0;i--)
 {
     int x=i;
     if(s[i]=='1')
     {cout<<x<<endl;f=0;break;}
 }
 if(f==1){cout<<"-1"<<endl;}
 }
	//code
	return 0;
}
