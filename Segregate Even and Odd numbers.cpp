/*
Segregate Even and Odd numbers
Given an array A[], write a program that segregates even and odd numbers. The program should put all even numbers first in sorted order, and then odd numbers in sorted order.

Input:
The first line of input contains an integer T, denoting the number of test cases. For each testcase there will be two lines of input: The first line contains a single integer N denoting the size of array.
The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
For each testcase, print the segregated array.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 105
0 ≤A[i]<=105

Example:
Input:
2
7
12 34 45 9 8 90 3
5
0 1 2 3 4
Output:
8 12 34 90 3 9 45
0 2 4 1 3
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void segregate(int a[],int n)
{
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2 == 0)
        {j++;swap(a[i],a[j]);}
    }
    sort(a,a+j+1);
    sort(a+j+1,a+n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;cin>>n;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 segregate(a,n);
 }
	//code
	return 0;
}
