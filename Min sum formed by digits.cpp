/*
Min sum formed by digits Submissions: 4870   Accuracy: 61.43%   Difficulty: Easy   Marks: 2
       
Problems
Given an array of digits (values are from 0 to 9), find the minimum possible sum of two numbers formed from digits of the array. All digits of given array must be used to form the two numbers.

Input:

The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. First line of each test case contains an integer N denoting the size of the array. Next line of each test contains N space seperated integers denoting the elements of the array.
Output:

For each test case output a single line containing the required sum.
Constraints:

1<=T<=100
1<=N<=50
Example:

Input

2
6
6 8 4 5 2 3
5
5 3 0 7 4

Output

604
82

Explanation:

Test Case 1-

The minimum sum is formed by numbers 
358 and 246
Test Case 2 -

The minimum sum is formed by numbers 
35 and 047
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
 int n,i;cin>>n;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 sort(a,a+n);
 int num1=0,num2=0;
 for(i=0;i<n;i++)
 {
     if(i%2 == 0)
     num1=num1*10+a[i];
     else
     num2=num2*10+a[i];
 }
 cout<<num1+num2<<endl;
 }
	//code
	return 0;
}
