/*
Find pairs with given relation
Given an array of distinct integers, write a program to find two pairs (a, b) and (c, d) such that ab = cd, where a, b, c and d are distinct elements.

Input:
First line of input contains a single integer T which denotes the number of test cases. T test cases follows. First line of each test case contains a single integer N which denotes the number of elements in the array. Second line of each test case contains N space separated integers which denotes elements of the array.

Output:
For each test case, print 1 if any such pair is found otherwise print -1.

Constraints:
1<=T<=100
1<=N<=10000

Example:
Input:
2
7
3 4 7 1 2 9 8
6
1 6 3 9 2 10
Output:
1
1


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
	            int l=a[i]*a[j];
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
	    cout<<-1<<endl;
	    
	}
	return 0;
}
