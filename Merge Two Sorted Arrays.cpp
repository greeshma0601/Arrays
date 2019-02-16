/*
Merge Two Sorted Arrays Submissions: 18960   Accuracy: 25.21%   Difficulty: Hard   Marks: 8
                           
Given two sorted arrays P[] and Q[] in non-decreasing order with size X and Y. The task is to merge the two sorted arrays into one sorted array (in non-decreasing order).

Note: Expected time complexity is O((X+Y) log(X+Y)). Try not to use extra space.

Input:
First line contains an integer T, denoting the number of test cases. First line of each test case contains two space separated integers X and Y, denoting the size of the two sorted arrays. Second line of each test case contains X space separated integers, denoting the first sorted array P. Third line of each test case contains Y space separated integers, denoting the second array Q.

Output:
For each test case, print (X + Y) space separated integer representing the merged array.

Constraints:
1 <= T <= 100
1 <= X, Y <= 5*104
0 <= Pi, Qi <= 109

Example:
Input:
1
4 5
1 3 5 7
0 2 6 8 9

Output:
0 1 2 3 5 6 7 8 9

Explanation:
Testcase 1: After merging two non-decreasing arrays, we have, 0 1 2 3 5 6 7 8 9.

 

** For More Input/Output Examples Use 'Expected Output' option **

*/
/*
	while(t--)
	{
	    long int x,y;
	    cin>>x>>y;
	    long long int p[x];
	    long long int q[y];
	    for(long int i=0;i<x;i++)
	      cin>>p[i];
	     for(long int i=0;i<y;i++)
	      cin>>q[i];
	     long  int i=0,j=0;
	     while(i<x && j<y)
	     {
	         if(p[i]<q[j])
	             cout<<p[i++]<<" ";
	         else
	           cout<<q[j++]<<" ";
	     }
	     while(i<x)
	       cout<<p[i++]<<" ";
	     while(j<y)
	       cout<<q[j++]<<" ";
	     cout<<endl;
	}
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
long long int i,j,n1,n2;
 cin>>n1;
 cin>>n2;
int a[n1];
int b[n2];
 for(i=0;i<n1;i++)
 cin>>a[i];
 for(i=0;i<n2;i++)
 cin>>b[i];
 vector<long long int>c(n1+n2);
 merge(a,a+n1,b,b+n2,c.begin());
 sort(c.begin(),c.end());
 for(i=0;i<=n1+n2-1;i++)
 {
     cout<<c[i]<<" ";
 }
 cout<<endl;
 }
	//code
	return 0;
}
