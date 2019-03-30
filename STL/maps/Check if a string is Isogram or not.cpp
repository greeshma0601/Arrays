/*
Check if a string is Isogram or not Submissions: 4073   Accuracy: 45.09%   Difficulty: Basic   Marks: 1
Associated Course(s):   Geeks Classes DSA   Geeks Classes in Noida
      
Problems
Given a string S of lowercase aplhabets, check if it is isogram or not. An Isogram is a string in which no letter occurs more than once.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each test case consist of one string in 'lowercase' only, in a separate line.

Output:
For each testcase, in a new line, Print 1 if string is Isogram else print 0.

Constraints:
1 <= T <= 100
1 <= |S| <= 103

Example:
Input:
2
machine
geeks
Output:
1
0

Explanation:
Testcase 2: geeks is not an isogram as 'e' appears twice. Hence we print 0
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
 string s;
 cin>>s;
 map<char,int>m;
 for(int i=0;i<s.length();i++)
 {
     m[s[i]]++;
 }
 int f=1;
 for(auto it=m.begin();it!=m.end();it++)
 {
     if(it->second>1)
     {
         f=0;
         break;
     }
 }
 if(!f)cout<<"0";
 else cout<<"1";
 cout<<endl;
 }
	//code
	return 0;
}
