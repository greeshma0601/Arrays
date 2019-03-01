/*
Check if a number is divisible by 8 Submissions: 4289   Accuracy: 21.33%   Difficulty: Easy   Marks: 2
       
Given a number n, check if it is divisible by 8.

Input:
The first line of the input contains an integer T denoting the number of test cases. For each test case, there is an integer n whose divisibility we need to check. 

Output:
For each test case, the output is 1 if the number is divisible by 8 else -1.

Constraints:
1<=T<=100

1<=digits in n<1000

Example:
Input:
2
16
15
Output:
1
-1
 

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool check(string s,int n){
    if(n == 0)return false;
    if(n == 1){
        if((s[n-1]-'0')%8 == 0)return true;
        else return false;
    }
    if(n == 2){
        if((((s[n-2]-'0') *10 )+ (s[n-1]-'0'))%8 == 0)return true;
        else return false;
    }
    int r1=(s[n-3]-'0')*100;
    int r2=(s[n-2]-'0')*10;
    int r3=s[n-1]-'0';
    if((r1+r2+r3)%8 == 0)return true;return false;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
string s;
cin>>s;
int n=s.length();
//bool a=check(s,n);
if(check(s,n))cout<<"1"<<endl;else
cout<<"-1"<<endl;
     
 }
	//code
	return 0;
}
