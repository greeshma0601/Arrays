/*
Count distinct elements in every window Submissions: 15324   Accuracy: 44.16%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation   Sudo Placement [IITs]
          
Given an array A[] of size N and an integer K. Your task is to complete the function countDistinct() which prints the count of distinct numbers in all windows of size k in the array A[].

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains two integers N and K. Then in the next line are N space separated values of the array A[].

Output:
For each test case in a new line print the space separated values denoting counts of distinct numbers in all windows of size k in the array A[].

Constraints:
1 <= T <= 100
1 <= N, K <= 100
1 <= A[] <= 100

Example(To be used only for expected output):
Input:
2
7 4
1 2 1 3 4 2 3
3 2
4 1 1

Output:
3 4 4 3
2 1

*/

#include <bits/stdc++.h>
using namespace std;
void countDistinct(int [], int , int );
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		countDistinct(a,k,n);cout<<endl;
	}
	return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete below method */
void countDistinct(int a[], int k, int n)
{
    //Your code here
    int i,dc=0;
    map<int,int> m;
    for(i=0;i<k;i++)
    {
        if(m[a[i]] == 0)
        {
            dc++;
        }
        m[a[i]]++;
    }
    cout<<dc<<" ";
    for(i=k;i<n;i++)
    {
        if(m[a[i-k]] == 1)
        {
            dc--;
            
        }
        m[a[i-k]]--;
    
    
    if(m[a[i]] == 0)
    {
        dc++;
    }
    m[a[i]]++;
    cout<<dc<<" ";
    }
   // cout<<endl;
}
