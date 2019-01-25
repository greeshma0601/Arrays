/*
Remove common characters and concatenate
Two strings are given. Modify 1st string such that all the common characters of the 2nd strings have to be removed and the uncommon characters of the 2nd string have to be concatenated with uncommon characters of the 1st string.

Note: If the modified string is empty then print '-1'.

Input:
The first line consists of an integer T i.e number of test cases. The first line of each test case consists of a string s1.The next line consists of a string s2. 

Output:
Print the required output.

Constraints: 
1<=T<=200
1<=|Length of Strings|<=100

Example:
Input:
2
aacdb
gafd
abcs
cxzca

Output:
cbgf
bsxz
*/
#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
     int i,j;
 string s1,s2,s3,s4;
 cin>>s1>>s2;
 int l1=s1.length();
 int l2=s2.length();
 int c1[26]={0},c2[26]={0};
 for(i=0;i<l1;i++)
 c1[s1[i]-'a']++;
 for(i=0;i<l2;i++)
 c2[s2[i]-'a']++;
 string temp="";
 for(i=0;i<l1;i++)
 {
    if(c1[s1[i]-'a']>0 && c2[s1[i]-'a'] == 0)
    temp=temp+s1[i];
 }
 for(i=0;i<l2;i++)
 {
     if(c2[s2[i]-'a']>0 && c1[s2[i]-'a'] == 0)
     temp=temp+s2[i];
 }
 if(temp=="")
 {cout<<"-1"<<endl;}
 else
 {
    cout<<temp<<endl; 
 }
 }
	//code
	return 0;
}
