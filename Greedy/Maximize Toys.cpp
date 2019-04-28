/*
Maximize Toys
Given an array consisting cost of toys. Given an integer K depicting the amount with you. Maximise the number of toys you can have with K amount.

Input:

The first line contains an integer T, depicting total number of test cases. 
Then following T lines contains an integer N depicting the number of toys and an integer K depicting the value of K.
Next line is followed by the cost of toys.


Output:

Print the maximum toys in separate line.


Constraints:

1 ≤ T ≤ 30
1 ≤ N ≤ 1000
1 ≤ K ≤ 10000
1 ≤ A[i] ≤ 10000


Example:

Input
1
7 50
1 12 5 111 200 1000 10
Output
4
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
 int n,i,cost;cin>>n>>cost;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 int c=0;
 sort(a,a+n);
 c=a[0];int c1=1;
 for(i=1;i<n;i++)
 {
     if(c+a[i]<cost)
     {
         c+=a[i];
         c1++;
     }
     else{break;}
 }
 cout<<c1<<endl;
     
 }
	//code
	return 0;
}
