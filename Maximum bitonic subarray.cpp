/*
Maximum bitonic subarray sum Submissions: 3315   Accuracy: 17.07%   Difficulty: Medium   Marks: 4
     
Given an array containing N numbers. The task is to find the maximum sum bitonic subarray. A bitonic subarray is a subarray in which elements are first increasing and then decreasing. A strictly increasing or strictly decreasing subarray is also considered as bitonic subarray.

Time Complexity : O(n)
Auxiliary Space : O(1)

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains a integer N and the second line contains N space separated array elements.

Output:
For each test case, print the maximum bitonic subarray sum in new line.

Constraints:
1<=T<=200
1<=N<=105
1<=A[i]<=105

Example:
Input:
2
7
5 3 9 2 7 6 4
7
5 4 3 2 1 10 6

Output:
19
17

*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
    	int n;
    	cin>>n;
    	int arr[n];
    	
    	for(int i=0;i<n;i++)
            cin>>arr[i];
        
        long long a[n];
        long long b[n];
        
        for (int i=0; i<n; i++) {
            a[i] = arr[i];
            b[i] = arr[i];
        }
        
        for(int i=1;i<n;i++) {
            if (arr[i] > arr[i-1]) {
                a[i] += a[i-1];
            }
        }
        
        for (int i=n-2; i>=0; i--) {
            if (arr[i] > arr[i+1]) {
                b[i] += b[i+1];
            }
        }
       /*  for (int i=0; i<n; i++) {
         cout<<   a[i] <<" ";
            //b[i] = arr[i];
        }cout<<endl;
         for (int i=0; i<n; i++) {
         cout<<   b[i] <<" ";
            //b[i] = arr[i];
        }cout<<endl;
        */
        
        long long sum=0;
        
        for(int i=0;i<n;i++)
            if(a[i]+b[i]-arr[i] > sum)
                sum=a[i]+b[i]-arr[i];
                
        cout<<sum<<endl;
	}
	return 0;
}
