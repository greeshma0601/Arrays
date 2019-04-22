/*
Find second largest element Submissions: 10176   Accuracy: 23.05%   Difficulty: Basic   Marks: 1
       
Problems
Given an array of elements. Your task is to find the second maximum element in the array.

Input:
The first line of input contains an integer T which denotes the number of test cases. Then T test cases follows. First line of each test case contains a single integer N which denotes the number of elements in the array. Second line of each test case contains N space separated integers which denotes the elements of the array.
Output:
For each test case in a new line print the second maximum element in the array. If there does not exist any second largest element, then print -1.


Constraints:
1<=T<=100
2<=n<=1000
1<=a[i]<=106


Example:
Input:
2
5
2 4 5 6 7
6
7 8 2 1 4 3
Output:
6
7
 
*/

#include<bits/stdc++.h>
#define loop(i,j,n) for(int i=j;i<n;i++)
using namespace std;
int main()
 {
	int t=0;
	cin>>t;
	while(t--)
	{
	int n=0;
	cin>>n;
	int arr[n];
	loop(i,0,n)
	cin>>arr[i];
	int max=arr[0];
	loop(i,0,n){
	    if(arr[i]>max)
	    max=arr[i];
	}
	int k=0,m=0;
	m=max;
	int flag=0;
	k=arr[0];
	loop(i,1,n){
	    if(arr[i]<m&&(arr[i]>k||k==max)){  //if largest is at first only then need condition k==max
	        k=arr[i];
	        flag=1;
	    }
	}
	if(k==max)
	cout<<"-1"<<endl;
	else
	cout<<k<<endl;
	}
	return 0;
 }      //Time complexity:o(n) space:o(1)   HappyCoding:)
        //submitted by Shanky
