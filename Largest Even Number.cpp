/*
Largest Even Number
As usual Babul is back with his problem but this time with numbers. In his problem there is a number P(always a whole number) with N digits. Now he started finding out the largest possible even number formed by rearranging this N digit number. For example consider number 1324, after rearranging the digits the largest even number possible is 4312.

Note: In case the number does not contain any even digit then output the largest odd number possible.

Input:
The first line of input will contain an integer T which is the number of testcases. Each of the next T lines will contain a number P.

Output:
For each test case in a new line print the required result.

Constraints:
1 <= T <= 100
1 <= N <= 1000

Example:
Input:
5
1324
3415436
1023422
03517
3555

Output:
4312
6543314
4322210
75310
5553

Explanation:
Testcase 1: The largest even number formed will be: 4312.

 

*/
#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int i,j,n;
 string s;
 cin>>s;
 n=s.length();
 /*for(i=0;i<n;.i++)
 cin>>a[i];*/
 sort(s.begin(),s.end(),greater<char> ());
if((s[n-1]-'0')%2 == 0)
{
    cout<<s;
    goto l1;
//    break;
}
else if((s[n-1]-'0')%2 != 0){
for(j=n-1;j>=0;j--)
{
    if((s[j]-'0')%2 == 0)
    break;
}
if(j < 0){cout<<s;goto l1;}
else{
 std::swap(s[n-1],s[j]);
sort(s.begin()+j,s.end()-1,greater<char> ());
 cout<<s;
 goto l1;

}}
l1:cout<<endl;
	}//code
	return 0;
}
