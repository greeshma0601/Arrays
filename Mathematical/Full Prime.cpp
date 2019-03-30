/*
Full Prime Submissions: 2548   Accuracy: 19.09%   Difficulty: School   Marks: 0 *School Problem's Submission isn't counted in score!
   
Problems
Given a number n, check if it is Full Prime or not. 
Note : A full prime number is one in which the number itself is prime and all its digits are also prime.

Input:
The first line of the input contains a single integer T, denoting the number of test cases. Then T test case follows, a single line of the input containing a positive integer N.

Output:
Print 'Yes' if it is full prime,otherwise print 'No'.

Constraints:
1<=T<=100
1<=N<=100000

Example:
Input:
2
53
41

Output:
Yes
No

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool isPrime(int n) 
{ 
    // Corner case 
    if (n <=1 )  return false; 
  
    // Check from 2 to n-1 
    for (int i=2; i<n; i++) 
        if (n%i == 0) 
            return false; 
  
    return true; 
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
 int f=0;
 int n=stoi(s);
 if(isPrime(n)){
 for(int i=0;i<s.length();i++)
 {
     int a=s[i]-'0';
    // cout<<a;
     if(isPrime(a))
     {
         f=1;
     }
     else
     {
         f=0;break;
     }
 }}
 if(f)cout<<"Yes";
 else cout<<"No";
 cout<<endl;
 }
	//code
	return 0;
}
