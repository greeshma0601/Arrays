/*
Max Sum without Adjacents Submissions: 14434   Accuracy: 41.7%   Difficulty: Easy   Marks: 2
                
Problems
Given an array A of positive integers. Find the maximum sum of a subsequence such that no two numbers in the sequence should be adjacent in the array.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N, size of array. The second line of each test case contains N elements.

Output:
Print the maximum sum of a subsequence.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 106
1 ≤ Ci ≤ 107

Example:
Input:
2
6
5 5 10 100 10 5
4
3 2 7 10

Output:
110
13

Explanation:
Testcase 2 : 3 and 10 forms a non-continuous subsequence with maximum sum.
 
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int ms(int a[],int n)
{
    int excl_new,excl=0,incl=a[0];
    for(int i=1;i<n;i++)
    {
        excl_new=(incl>excl)?incl:excl;
        incl=excl+a[i];
        excl=excl_new;
    }
    return ((incl > excl)? incl : excl); 
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;cin>>n;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 cout<<ms(a,n)<<endl;
 }
	//code
	return 0;
}
