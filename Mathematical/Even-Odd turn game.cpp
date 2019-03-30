/*
Even-Odd turn game Submissions: 1289   Accuracy: 18.8%   Difficulty: Basic   Marks: 1
   
Problems
Given three positive integers X, Y and P. Here P denotes the number of turns. Whenever the turn is odd X is multiplied by 2 and in every even turn Y is multiplied by 2. The task is to find the value of max(X, Y) ÷ min(X, Y) after the complete P turns.

Input:

The first line of the input contains a single integer T, denoting the number of test cases. Then T test case follows, a single line of the input containing three integers X,Y and P.


Output:

For each test case, print the value of max(X, Y) ÷ min(X, Y) after the complete P turns .
Constraints:

1<=T<=100

1<=X<=Y<=P<=1000
Example:

Input:

2

1 2 1

3 7 2

Output:

1

2



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
 long long int x,y,p,a;
 cin>>x>>y>>p;
if(p%2 == 0)
{
     a=max(x,y)/min(x,y);
}
else
{
    a=max(2*x,y)/min(2*x,y);
}
 cout<<a<<endl;
 }
	//code
	return 0;
}
