/*
Make a Distinct Digit Array Submissions: 3258   Accuracy: 35.58%   Difficulty: Basic   Marks: 1
         
Given an array of positive integers of size N. The task is to make a sorted array which will contain all distinct digits present in A.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains two lines, first line containing an integer N size of array, and second line containing the array elements.

Output:
For each test case, print the required array.

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= Ai <= 1016

Example:
Input:
2
3
131 11 48
4
111 222 333 446

Output:
1 3 4 8
1 2 3 4 6

Explanation:
Testcase 1:  1, 3, 4, and 8 are only distinct digits that can be extracted from the numbers of the array.

*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int A[n],temp[10];
	    int i;
	    for(i=0;i<10;i++)
	    {
	        temp[i]=11;
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>A[i];
	        
	    }
	    int m=0;
	    for(i=0;i<n;i++)
	    {
	       while(A[i]>0)
	       {
	           int x=A[i]%10;
	           A[i]=A[i]/10;
	           int j;
	           int flag=0;
	           for(j=0;j<10;j++)
	           {
	               if(x==temp[j])
	               flag=1;
	           }
	           if(flag==0)
	           temp[m++]=x;
	       }
	    }
	   sort(temp,temp+m);
	    for(i=0;i<m;i++)
	    {
	        cout<<temp[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
