/*
Nth Even Fibonacci Number Submissions: 4678   Accuracy: 21.09%   Difficulty: Basic   Marks: 1
Associated Course(s):   Interview Preparation
      
Given a positive integer N, find the Nth Even Fibonacci number. Since the answer can be very large, print the answer modulo 1000000007.

Input:

The first line of input contains T denoting the number of testcases.Then each of the T lines contains a single positive integer N.

Output:

Output the Nth Even Fibonacci number.

Constraints:

1<=T<=200
1<=N<=1000

Example:

Input:
3
1
2
5

Output:

2
8
610
*/

#include<iostream>
using namespace std;
unsigned long a[3*1001];
int findfibo(int n){
    if(a[n]!=-1)
    return a[n];
    a[n]=(findfibo(n-1)+findfibo(n-2))%1000000007;
    return a[n];
}
int main() {
	//code
	int i,t,n;
	scanf("%d",&t);
	while(t--){
	   
	    a[0]=0;
    	a[1]=1;
	    for(i=2;i<3*1001;i++)
	    a[i]=-1;
	    scanf("%d",&n);
	    findfibo(n*3+1);
	    printf("%d ",a[3*n]);
	    printf("\n");
	}
	return 0;
}
