/*
Find the element that appears once in sorted array Submissions: 16080   Accuracy: 51.1%   Difficulty: Basic   Marks: 1
            
Given a sorted array A, size N, of integers; every element appears twice except for one. Find that element in linear time complexity and without using extra memory.

Input:
The first line of input consists of T, the number of the test cases. T testcases follow. Each testcase contains two lines of input.
The first line of each test case contains the size of the array, and the second line has the elements of the array.

Output:
For each testcase, in a new line, print the number that appears only once in the array.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 107
0 ≤ A[i] ≤ 1017

Example:
Input:
1
11
1 1 2 2 3 3 4 50 50 65 65
Output:
4

*/
/*#include<iostream>
#include<vector>
using namespace std;
int main()
 {
	int t,n,i;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    vector<int>a(n);
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<n;i+=2)
	    {
	        if(a[i]!=a[i+1])
	        break;
	    }
	    cout<<a[i]<<endl;
	}
	return 0;
}*/



#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int i,n;
 scanf("%d",&n);
 vector<int> a(n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);

 for(i=0;i<n;i+=2)
 {
     if(a[i]!=a[i+1]){break;}
 }
 cout<<a[i]<<endl;
 }
	//code
	return 0;
}
