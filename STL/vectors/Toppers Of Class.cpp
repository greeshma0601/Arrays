/*
Toppers Of Class
There is a class of N students and the task is to find the top K marks scorers. You need to print the index of the toppers of the class which will be same as the index of the student in the input array (use 0-based indexing). First print the index of the students having highest marks then the students with second highest and so on. If there are more than one students having same marks then print their indices in ascending order.Suppose k = 2 and the students having highest marks have indices 0 and 5 and students having second highest marks have indices 6 and 7 then output will be 0 5 6 7.

Input:
The first line of input consists of an integer T denoting the number of test cases .Each test case consists of three lines first line consists of an integer N denoting the number of students of class second line consists N spaced integers denoting the marks of students and third line consists of an integer K which denotes the number of top scores you have to find.

Output:
Single line output, denoting the indices of top k cores with space between them.

Constraints:
1 <= T <= 100
1 <= N <= 1000
1 <= marks of students <= 106

It is given that k will be such that its value will always be less than or equal to type of marks of students
Example:
Input
1
5
2 2 1 3 1
2
Output
3 0 1

Explanation:
Testcase 1: Topper with 3 marks is present at 3rd index, 2 marks is present at 0th index and next at 1st index.
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool comp(const pair<int,int>&a,const pair<int,int>&b)
{
    if(a.first!=b.first)
     return a.first>b.first;
     return a.second<b.second;
}

int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 
 int i,n;cin>>n;
 vector<pair<int,int>>v;
 int k;
 for(i=0;i<n;i++)
 {
     int s;cin>>s;
     
     v.push_back(make_pair(s,i));
 }
 cin>>k;
 sort(v.begin(),v.end(),comp);
 int c=0;
 for(i=0;i<n;i++)
 {
     if(c == k)break;
     c++;
     cout<<v[i].second <<" ";
 
      if(v[i].first == v[i+1].first)c--;
 }
 cout<<endl;
 }
	//code
	return 0;
}
