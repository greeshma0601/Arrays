/*
Sum equals to Sum
Given an array A of distinct integers. The task is to find if there are two pairs (a, b) and (c, d) such that a+b = c+d, and elements of array are distinct.

Input:
First line consists of T test cases. First line of every test case consists of N, denoting the number of elements of array. Second line of every test case consists of elements of array.

Output:
Singple line output, print the 1 if pair exsits else 0.

Constraints:
1 <= T <= 200
1 <= N <= 105
1 <= Ai <= 106

Example:
Input:
2
7
3 4 7 1 2 9 8
7
65 30 7 90 1 9 8
Output:
1
0
Explanation:
Testcase 1: (3, 7) and (9, 1) are the pairs whose sum are equal.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int i,a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    unordered_set<int> ump;
	    int flag=0;
	    for(i=0;i<n-1;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            int l=a[i]+a[j];
	         if(ump.find(l)!=ump.end())
	         {
	             cout<<1<<endl;
	             flag=1;
	             break;
	         }
	         else
	         {
	             ump.insert(l);
	         }
	        }
	        if(flag==1)
	        break;
	    
	    }
	    if(flag==0)
	    cout<<0<<endl;
	    
	}
	return 0;
}
