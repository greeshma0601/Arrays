/*
Triangular Number Submissions: 1962   Accuracy: 62.28%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
     
Check whether the number is Triangular or not. A number is termed as triangular number if we can represent it in the form of triangular grid of points such that the points form an equilateral triangle and each row contains as many points as the row number, i.e., the first row has one point, second row has two points, third row has three points and so on. The starting triangular numbers are 1, 3 (1+2), 6 (1+2+3), 10 (1+2+3+4).

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N, N is the number to be checked if it is traingular or not.

Output:
If the number is Triangular then display 1 otherwise 0.

Constraints:

1<= T <= 100
1<= N <= 10000000

Example:

Input:
5
3
4
6
55
345

Output:
1
0
1
1
0

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
 int i=0;
 while(n>0)
 {
     i+=1;
     n=n-i;
 }
 if(n == 0)cout<<"1";
 else cout<<"0";
 cout<<endl;
 }
	//code
	return 0;
}
