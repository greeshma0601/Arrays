/*
Activity Selection
Given N activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.

Note : The start time and end time of two activities may coincide.

Input:
The first line contains T denoting the number of testcases. Then follows description of testcases. First line is N number of activities then second line contains N numbers which are starting time of activies.Third line contains N finishing time of activities.

Output:
For each test case, output a single number denoting maximum activites which can be performed in new line.

Constraints:
1<=T<=50
1<=N<=1000
1<=A[i]<=100

Example:
Input:
1
6
1 3 2 5 8 5
2 4 6 7 9 9

Output:
4
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Activity
{
    int start,finish;
};
bool activitycomp(Activity a1,Activity a2)
{
    return a1.finish<a2.finish;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 Activity a[n];
 for(i=0;i<n;i++)
 cin>>a[i].start;
 for(i=0;i<n;i++)
 cin>>a[i].finish;
 sort(a,a+n,activitycomp);
 int j;i=0;
 int c=1;
 for(j=1;j<n;j++)
 {
     if(a[j].start>=a[i].finish)
     {c++;i=j;}
 }
 cout<<c<<endl;
 }
	//code
	return 0;
}
