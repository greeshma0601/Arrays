/*
Remove Duplicates from unsorted array Submissions: 2522   Accuracy: 39.92%   Difficulty: Basic   Marks: 1
Associated Course(s):   Interview Preparation
     
Given an array of integers which may or may not contain duplicate elements. Your task is to print the array after removing duplicate elements, if present.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n denoting the size of the array. Then following line contains 'n' integers forming the array.

Output: 
Output the array with no duplicate element present, in the same order as input.

Constraints:
1<=T<=100
1<=n<=100
1<=a[i]<=100

Example:
Input:
1
6
1 2 3 1 4 2
Output: 
1 2 3 4

*/

#include <iostream>
#include<vector>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    vector<int> g1;
	    int n,i,j;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            if(a[i]==a[j])
	            {
	               a[j]=0; 
	            }
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>0)
	        {
	        g1.push_back(a[i]);
	        }
	    }
	    for (auto k = g1.begin(); k != g1.end(); ++k)
	    {
        cout << *k << " "; 
	    }
	    cout<<endl;
	}
	return 0;
}
