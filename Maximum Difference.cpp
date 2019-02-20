/*
Maximum Difference Submissions: 10674   Accuracy: 49.16%   Difficulty: Easy   Marks: 2
           
You are given an array A (distinct elements) of size N. Find out the maximum difference between any two elements such that larger element appears after the smaller number in A.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each testcase contains two lines of input.
The first line of each test case is N,N is the size of array.
The second line of each test case contains N elements separated by spaces.

Output:
For each testcase, print the maximum difference between two element. Otherwise print -1

Constraints:
1 <= T <= 100
2 <= N <= 107
0 <= Ai <= 107

Example:
Input:
2
7
2 3 10 6 4 8 1
6
7 9 5 6 3 2
Output:
8
2
Explanation:
Testcase1:  Array is [2, 3, 10, 6, 4, 8, 1] then returned value is 8 (Diff between 10 and 2).
Testcase2: Array is [ 7, 9, 5, 6, 3, 2 ] then returned value is 2 (Diff between 7 and 9).

*/
/*
Find maximum difference where small element occur before than large one.


Idea is to keep track on minimum element and check with current element.

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     cin>>a[i];
    
    
    // cout<<max<<endl;
     int maxdiff=-1;
     int minele =a[0];
for(int i=1;i<n;i++)
{
    minele=min(a[i],minele);
    if(a[i]>minele)
    {
        maxdiff=max(maxdiff,a[i]-minele);
    }
}
 cout<<maxdiff<<endl;
 }
	//code
	return 0;
}
