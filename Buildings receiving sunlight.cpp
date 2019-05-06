/*
Buildings receiving sunlight Submissions: 6578   Accuracy: 37.99%   Difficulty: Easy   Marks: 2
      
Problems
Given are the heights of certain Buildings which lie adjacent to each other. Sunlight starts falling from left side of the buildings. If there is a building of certain Height, all the buildings to the right side of it having lesser heights cannot see the sun . The task is to find the total number of such buildings that receive sunlight.
Input:
First Line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an integer N denoting the number of buildings. Second line contains N space separated integers H1, H2,...HN denoting heights of buildings.

Output:
Corresponding to each test case, print the desired output in a new line

Constraints:
1<=T<=100
1<=N<=100
1<=Hi<=100

Example:
Input:
3
6
6 2 8 4 11 13
5
2 5 1 8 3
7
3 4 1 0 6 2 3

Output:
4
3
3

Explanation:
In the first example only buildings of height 6 8 11 and 13 can see the sun, hence output is 4.
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
 int n,i;cin>>n;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 int m,cm;
 cm=a[0];
 int c=1;
 for(i=1;i<n;i++)
 {
     if(a[i]>=cm)
     {
         cm=a[i];
         c++;
     }
 }
     cout<<c<<endl;
 }
	//code
	return 0;
}
