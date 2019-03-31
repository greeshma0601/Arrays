/*
Equal Sum
Given an array A of length N. Determine if there exists an element in the array such that the sum of the elements on its left is equal to the sum of
the elements on its right. If there are no elements to the left/right, then the sum is considered to be zero. 
Formally, find an i, such that, A1+A2...Ai-1 =Ai+1+Ai+2...AN.
 

Input:

 The first line contains T, the number of test cases. For each test case, the first line contains N, the number of elements in the array A. The
second line for each test case contains N space-separated integers, denoting the array A.


Output:

For each test case print YES if there exists an element in the array, such that the sum of the elements on its left is equal to the sum of the
elements on its right; otherwise print NO in a separate line.


Constraints:

1≤ T ≤ 30 
1≤ N ≤100000 
1≤ Ai ≤ 2×10000 
1≤ i ≤N


Example:

Input
1
4
1 2 3 3
Output:
YES
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
 int a[n],s=0;for(i=0;i<n;i++){cin>>a[i];s+=a[i];}
 int ls=0;int f=0;
 for(i=0;i<n;i++)
 {
     s-=a[i];//right sum for index i
     if(ls == s)
     {
         f=1;break;
     }
     ls+=a[i];//left sum for index i
 }
 if(!f)cout<<"NO";
 else cout<<"YES";
 cout<<endl;
     
 }
	//code
	return 0;
}
