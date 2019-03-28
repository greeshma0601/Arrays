/*
Leap Year Submissions: 5574   Accuracy: 29.7%   Difficulty: School   Marks: 0 *School Problem's Submission isn't counted in score!
Associated Course(s):   Fundamentals of Programming with C
    
Problems
For an input year tell whether the year is leap or not. 

Input:
First line contains an integer, the number of test cases 'T' Each test case should contain a positive integer N(Year).


Output:
Print "Yes" if it is a leap year else "No". (Without the double quotes)


Constraints:
1<=T<=31
1<=N<=9999


Example:
Input:
1
4

Output:
Yes

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
 int n;
 cin>>n;
 if((n%400 == 0) || ((n%4 == 0) && (n%100!=0)))
 cout<<"Yes";
 else
 cout<<"No";
 cout<<endl;
 }
	//code
	return 0;
}
