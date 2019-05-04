/*
Sorted matrix Submissions: 1639   Accuracy: 65.07%   Difficulty: Basic   Marks: 1
    
Problems
Given an n x n matrix, where every row and column is sorted in non-decreasing order. Print all elements of matrix in sorted order.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n denoting the size of the matrix. Then the next line contains the n x n elements in row wise order.

Output:
Print the elements of the matrix in sorted order.

Constraints:
1<=T<=100
1<=n<=100
1<=a[n][n]<=100

Example:
Input:
2
4
10 20 30 40 15 25 35 45 27 29 37 48 32 33 39 50
3
1 3 4 2 6 7 5 8 9

Output:
10 15 20 25 27 29 30 32 33 35 37 39 40 45 48 50 
1 2 3 4 5 6 7 8 9 
*/
/*
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int arr[n][n];
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<n;j++)
             {
                 cin>>arr[i][j];
             }
         }
         int c[n];
         priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
         for(int i=0;i<n;i++)
         {
             pq.push(make_pair(arr[i][0],i));
             c[i] = 1;
         }
         int a,i;
         while(!pq.empty())
         {
             tie(a,i) = pq.top();
             pq.pop();
             cout<<a<<" ";
             if(c[i]<n)
             {
                 pq.push(make_pair(arr[i][c[i]],i));
                 c[i] = c[i] + 1;
             }
             
             
         }
         cout<<endl;
         
     }
	//code
	return 0;
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
     int n;
     cin>>n;
     //int a[n][n];
     n=n*n;
     int b[n];
     for(int i=0;i<n;i++)
     {
         cin>>b[i];
     }
     sort(b,b+n);
     for(int i=0;i<n;i++)cout<<b[i]<<" ";
     cout<<endl;
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 }
	//code
	return 0;
}
