/*
Third largest element Submissions: 10307   Accuracy: 45.43%   Difficulty: Basic   Marks: 1
     
Given an array of distinct elements. Your task is to find the third largest element in it. You have to complete the function thirdLargest which takes two argument. The first argument is the array a[] and the second argument is the size of the array (n). The function returns an integer denoting the third largest element in the array a[]. The function should return -1 if there are less than 3 elements in input.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. The first line of each test case is N, size of array. The second line of each test case contains N space separated values of the array a[].

Output:
Output for each test case will be  the third largest element of the array . 

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 103
1 ≤ A[i] ≤ 103

Example(To be used for only expected output):
Input:
1
5
2 4 1 3 5

Output:
3

*/
/*
int i=0,m1=0,m2=0,m=0;
while(n>0)
{
if(a[i]>m)
{
m2=m1;
m1=m;
m=a[i];
}
i++;
n--;
}
printf("%d",m2);
*/

  #include<bits/stdc++.h>
long long int  thirdLargest(long long int a[],long long  int n)
{
     //Your code here
     if(n>=3){
     sort(a,a+n);
     return a[n-3];
     }
     else return -1;
}
