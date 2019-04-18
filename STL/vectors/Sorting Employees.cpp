/*
Sorting Employees Submissions: 4114   Accuracy: 28.79%   Difficulty: Basic   Marks: 1
          
Problems
You have records of employee name as string (Ename) and salary as positive integer (S). You have to sort the records on the basis of employee salary, if salary is same then use employee name for comparison.

Input:
The first line consists of a number T denoting the number of test cases. Each test case will consist of a integer N denoting number of employees followed by the name and salary of the employee with spaces.

Output:
Each test case consists of a single line. It consists of the name and salary of the employees with spaces.

Constraints:
1 <= T <= 200
1 <= N <= 1000
1 <= Ename <= 106
1 <= S <= 106

Example:
Input:
2
2
xbnnskd 100 geek 50
2
shyam 50 ram 50
Output:
geek 50 xbnnskd 100
ram 50 shyam 50

Explanation:
Testcase 1: geek has lowest salary as 50 and xbnnskd has more salary. So sorted output is as given in sample.

*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool comp(const pair<string,int>&a,const pair<string,int>&b)
{
    if(a.second!=b.second)
   
    return a.second<b.second;

     return a.first<b.first;
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
 vector<pair<string,int>>v;
 for(i=0;i<n;i++)
 {
     string s;cin>>s;
     int a;cin>>a;
     v.push_back(make_pair(s,a));
 }
 sort(v.begin(),v.end(),comp);
 for(i=0;i<n;i++)
 {
     cout<<v[i].first<<" "<<v[i].second <<" ";
 }
 cout<<endl;
 }
	//code
	return 0;
}
