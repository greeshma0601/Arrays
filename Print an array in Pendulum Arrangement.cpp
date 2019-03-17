/*
Print an array in Pendulum Arrangement Submissions: 9956   Accuracy: 47.05%   Difficulty: Basic   Marks: 1
    
Problems
Discussions
Write a program to input a list of n integers in an array and arrange them in a way similar to the to-and-fro movement of a Pendulum.

The minimum element out of the list of integers, must come in center position of array. If there are even elements, then minimum element should be moved to (n-1)/2 index (considering that indexes start from 0)
The next number (next to minimum) in the ascending order, goes to the right, the next to next number goes to the left of minimum number and it continues like a Pendulum.
Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n denoting the size of the array. Then next line contains N space separated integers forming the array.

Output:
Output the array in Pendulum Arrangement.

Constraints:
1<=T<=500
1<=N<=100
1<=a[i]<=1000

Example:
Input:
2
5
1 3 2 5 4
5
11 12 31 14 5

Output:
5 3 1 2 4
31 12 5 11 14

** For More Input/Output Examples Use 'Expected Output' option **
Contributor: Ayush Govil
Author: Ayush Govil 1


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
 int n,j;cin>>n;
 int a[n];for(j=0;j<n;j++)cin>>a[j];
 int b[n];
 int k=(n-1)/2;
 sort(a,a+n);
if(n%2 == 1){
     for(int i=n-1;i>=0;i--){
         
            cout<<a[i]<<" ";
            i=i-1;
           
        }}
        else{
            for(int i=n-2;i>=0;i--){
            
            cout<<a[i]<<" ";
            i=i-1;
                
            }
        }
        for(int i=1;i<n;i++){
            cout<<a[i]<<" ";
            i=i+1;
        }
        cout<<endl;
}
 
	//code
	return 0;
}
