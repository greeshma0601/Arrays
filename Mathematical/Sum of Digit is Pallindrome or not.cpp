/*
Sum of Digit is Pallindrome or not
Write a program to check if the sum of digits of a given number N is a palindrome number or not.

Input:
The first line of the input contains T denoting the number of testcases. T testcases follow. Then each of the T lines contains single positive integer N denoting the value of number.

Output:
For each testcase, in a new line, output "YES" if pallindrome else "NO". (without the quotes)

Constraints:
1 <= T <= 200
1 <= N <= 1000

Example:
Input:
2
56
98
Output:
YES
NO
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool isPalindrome(string s)
{
    string s1=s;
    reverse(s.begin(),s.end());
    if(s1 == s)return 1;
    else return 0;
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
 int sum=0;
 for(int i=0;i<s.length();i++)
 {
     int a=s[i]-'0';
     sum+=a;
 }
 string s1=to_string(sum);
 //cout<<s1<<endl;
 if(isPalindrome(s1))
 {
     cout<<"YES";
 }
 else cout<<"NO";
 cout<<endl;
 }
	//code
	return 0;
}
