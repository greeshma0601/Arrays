/*
Squares in N*N Chessboard Submissions: 5741   Accuracy: 71.28%   Difficulty: Easy   Marks: 2
            
Problems
Find total number of Squares in a N*N cheesboard.

Input:
The first line contains an integer T, depicting total number of test cases. Then following T lines contains an integer N that is the side of the chessboard.

Output:
Each seperate line showing the maximum number of squares possible.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 100

Example:
Input:
2
1
2

Output:
1
5

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
 int res=(n*(n+1)*(2*n+1))/6;
 cout<<res<<endl;
 }
	//code
	return 0;
}
