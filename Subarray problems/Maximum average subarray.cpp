/*
Maximum average subarray Submissions: 1566   Accuracy: 34.28%   Difficulty: Easy   Marks: 2
    
Problems
Given an array A[ ]  and a positive integer K, find the sub-array of length K with the maximum average.
eg for A[] = {1, 12, -5, -6, 50, 3}, k = 4
Maximum average sub-array of length 4 begins at index 1.
Maximum average is (12 - 5 - 6 + 50)/4 = 51

Input
The first line of input contains an integer T denoting the number of test cases. Then T test cases
follow. 
The first line of each test case contains a positive integer K, denoting the length of the sub-array.
The second line of each test case contains a positive integer N, denoting the length of the array.
The third line of each test case will contain N space seprated integers denoting the elements of the
array.

Output
Print out the maximum average sub-array.


Constraints
1 <= T <= 100
0 <   N <= 30
-500 <=  A[i] <= 500

Examples 

Input
3
2
5
10 4 5 15 20
2
4
-12 34 56 7
3
7
3 -435 335 10 -50 100 20


Output
15 20
34 56
335 10 -50
*/
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>k>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	     }
	     int cursum=0;
	     int a,b;
	     a=0;
	     b=0;
	     for(int i=0; i<k; i++)
	     {
	     cursum=cursum+arr[i];
	     }
	     b=k-1;
	     int maxsum;
	     maxsum=cursum;
	     
	     for(int i=k; i<n; i++)
	     {
	         cursum =cursum+arr[i]-arr[i-k];
	         if(cursum>maxsum)
	         {
	             maxsum= cursum;
	             a=i-k+1;
	             b=i;
	         }
	     }
	     for(int i=a;i<=b;i++)
	     cout<<arr[i]<<" ";
	     cout<<endl;
	}
	return 0;
}
