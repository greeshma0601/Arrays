/*
Triplet Sum in Array
Given an array A[] of N numbers and another number x, determine whether or not there exist three elements in A[] whose sum is exactly x.

Input:
First line of input contains number of testcases T. For each testcase, first line of input contains n and x. Next line contains array elements.

Output:
Print 1 if there exist three elements in A whose sum is exactly x, else 0.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 103
1 ≤ A[i] ≤ 105

Example:
Input:
2
6 13
1 4 45 6 10 8
5 10
1 2 4 3 6

Output:
1
1

Explanation:
Testcase 1: There is one triplet with sum 13 in the array. Triplet elements are 1, 4, 8, whose sum is 13.

*/



#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool triplet(vector<int> v,int n,int required_sum){
    
    
    // Sort
    sort(v.begin(),v.end());
    

    // i till n-3 as after that there would be no triplets
    for(int i=0;i<=n-3;i++){
        
        // Select v[i] and now we have to find pair that sums to k-v[i] in sorted array 
        
        // We have to find that sum in array from [i+1,n-1]
        
        int j=i+1;
        int k=n-1;
        
        int target=required_sum-v[i];
        int sum;
        
        
        while(j<k){
            
            sum=v[j]+v[k];
            if(sum==target){
                return true;
            }
            else if(sum<target){
                j++;
            }
            else{
                k--;
            }
        }
    }
    return false;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
     int n,s;
     cin>>n>>s;
 vector<int> v(n);
 for(int i=0;i<n;i++)
 cin>>v[i];
 bool x=triplet(v,n,s);
 if(x){cout<<"1"<<endl;}
 else{cout<<"0"<<endl;}
 }
	//code
	return 0;
}
