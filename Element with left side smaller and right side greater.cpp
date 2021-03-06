/*
Element with left side smaller and right side greater Submissions: 24603   Accuracy: 27.35%   Difficulty: Easy   Marks: 2
          
Given an unsorted array of size N. Find the first element in array such that all of its left elements are smaller and all right elements to it are greater than it.

Note: Left and right side elements can be equal to required element. And extreme elements cannot be required element.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an Integer N denoting size of array and the second line contains N space separated array elements.

Output:
For each test case, in a new line print the required element. If no such element present in array then print -1.

Constraints:
1 <= T <= 100
3 <= N <= 106
1 <= A[i] <= 106

Example:
Input:
3
4
4 2 5 7
3
11 9 12
6
4 3 2 7 8 9

Output:
5
-1
7
Explanation:
Testcase 1 : Elements on left of 5 are smaller than 5 and on right of it are greater than 5.
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int required(int a[],int n){
    for(int i=1;i<n-1;i++){
        int req=a[i];
        int flag=1;
        for(int j=0;j<i;j++){
            if(req<a[j])
               { flag=0;
                   break;
               }       
        }if(flag==1){
        for(int j=i+1;j<n;j++){
            if(req>a[j])
             {   flag=0;
                 break;
             }     
        }}
        if(flag==1)
           return req;
        
    }
    return -1;
}
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
       cin>>a[i];
    } 
    int res =required(a,n);
    cout<<res<<"\n";
   }
}
