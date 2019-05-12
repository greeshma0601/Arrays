/*
Equilibrium index of an array
Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes . Now Given an array your task is to complete the function findEquilibrium which returns the index of the first Equilibrium point in the array. The function takes  two arguments. The first argument is the array A[ ] and the second argument is the size of the array A.

Input Format:
The first line of input takes an integer T denoting the no of test cases, then T test cases follow. The first line of each test case is an integer N denoting The size of the array . Then in the next line are N space separated values of the array. 

Output Format:
For each test case output will be the equilibrium index of the array .If no such index exist output will be -1.

Task :
Your task is to complete the function (findEquilibrium) below and return the index with required return type.

Constraints:
1<=T<=100
1<=N<=100
-100<=A[]<=100

Example(To be used only for expected output):
Input
2
4
1 2 0 3
4
1 1 1 1

Output
2
-1

*/
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* You are required to complete this method*/
int findEquilibrium(int a[], int n)
{
  //Your code here
  int lsum=0;
  int sum=0;
  int i;
  
  for(i=0;i<n;i++)
  sum+=a[i];
  
  for(i=0;i<n;i++)
  {
      sum-=a[i];//right sum for index i
      if(lsum == sum)
      return i;
      
      lsum+=a[i];//leftsum for index i+1
  }
  return -1;
}
