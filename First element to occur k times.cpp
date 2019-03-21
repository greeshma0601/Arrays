/*
First element to occur k times Submissions: 6351   Accuracy: 29.17%   Difficulty: Basic   Marks: 1
Associated Course(s):   Interview Preparation   Geeks Classes in Noida
      
Problems
Discussions
Given an array of N integers. The task is to find the first element that occurs K number of times. If no element occurs K times the print -1.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. The first line of each test case contains an integer N denoting the size of an array and the number K. The second line of each test case contains N space separated integers denoting elements of the array A[ ].

Output:
For each test case in a new line print the required answer.

Constraints:
1 <= T <= 100
1 <= N, K <= 105
1<= A <= 106

Example:
Input :
1
7 2
1 7 4 3 4 8 7
Output :
7

Explanation:
Both 7 and 4 occur 2 times. But 7 is the first that occurs 2 times.
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
 int n,i,k;cin>>n>>k;
 map<int,int>m;
 int f=0;
 int a[n];
 for(i=0;i<n;i++)
 {
 cin>>a[i];
 
     m[a[i]]++;
 }
 for(i=0;i<n;i++)
 {
     if(m[a[i]] == k)
     {
         
     f=1;
     cout<<a[i]<<endl;
 break;
     }         
     }
 
 if(!f)
    cout<<"-1"<<endl; 
 }
	//code
	return 0;
}
