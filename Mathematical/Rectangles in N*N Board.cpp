/*
Rectangles in N*N Board Submissions: 7499   Accuracy: 30.31%   Difficulty: Easy   Marks: 2
           
Problems
Find total number of Rectangles (excluding squares) in a N*N cheesboard.

Input:

The first line contains an integer T, depicting total number of test cases. 
Then following T lines contains an integer N that is the side of the chessboard.


Output:

Each seperate line showing the maximum number of rectangles possible.


Constraints:

1 ≤ T ≤ 1000
1 ≤ N ≤ 10000
 

Example:

Input :

2
1
2

Output :

0
4

 

Explanation :

For n=1 there is only one square possible and no rectangles so answer will be 0. 

For n=2 there will be 2 rectangles of dimension 1*2 and 2 rectangles of dimension 2*1. So answer if 4. 

 

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
 long long int n;
 cin>>n;
 cout<<((n*n*(n+1)*(n+1))/4)-((n*(n+1)*(2*n+1))/6)<<endl;
 }
	//code
	return 0;
}
