/*
Facing the sun
Monu lives in a society which is having high rise buildings. This is the time of sunrise and monu wants see the buildings receiving the sunlight. Help him in counting the number of buildings recieving the sunlight.
Given an array H representing heights of buildings. You have to count the buildings which will see the sunrise (Assume : Sun rise on the side of array starting point).

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N, N is the number of buildings. The second line of each test case contains N input H[i], height of ith building.

Output:
Print the total number of buildings which will see the sunset.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 106
1 ≤ Hi ≤ 108

Example:
Input:
2
5
7 4 8 2 9
4
2 3 4 5

Output:
3
4

Explanation:
Testcase 1: Building with height 7, 8 and 9 will recieve the sunlight during sunrise.
 
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
 int m=a[0];int c=1;
 for(i=1;i<n;i++)
 {
     if(a[i]>m)
     {
         c++;
         m=a[i];
     }
 }
 cout<<c<<endl;
 
 }
	//code
	return 0;
}
